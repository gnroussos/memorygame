//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <time.h>
#include <stdlib.h>

using namespace MemoryGame;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Media::Imaging;
using namespace Windows::UI::Xaml::Media::Animation;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::ApplicationModel;

MainPage::MainPage()
{
	InitializeComponent();

	blackBrush = ref new SolidColorBrush(Windows::UI::Colors::Black);
	whiteBrush = ref new SolidColorBrush(Windows::UI::Colors::White);
//	redBrush = ref new SolidColorBrush(Windows::UI::Colors::Red);


	srand(static_cast<unsigned int>(time(nullptr)));
	timer = ref new HRTimer();

	cardCount = cardGrid->ColumnDefinitions->Size * cardGrid->RowDefinitions->Size;
	pairsFound = ref new Platform::Collections::Vector<Button^>;

	InitializeCardPack();
	//	InitializeGame();

}

void MemoryGame::MainPage::Card_Entered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	safe_cast<Grid^>(sender)->Background = blackBrush;
}


void MemoryGame::MainPage::Card_Exited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	safe_cast<Grid^>(sender)->Background = whiteBrush;
}

int MemoryGame::MainPage::IsFound(Windows::UI::Xaml::Controls::Button ^B)
{
	for (int i = 0; i < cardGrid->Children->Size; i++)
	{
		Grid^ grid = safe_cast<Grid^>(cardGrid->Children->GetAt(i));
		Button^ btn = safe_cast<Button^>(grid->Children->GetAt(0));
		if (B == btn)
			return i;
	}
	return NOTFOUND;
}

void MemoryGame::MainPage::FlipCards()
{
	for (int i = 0; i < cardGrid->Children->Size; i++)								//enable rest cards
	{
		Grid^ grid = safe_cast<Grid^>(cardGrid->Children->GetAt(i));
		Button^ btn = safe_cast<Button^>(grid->Children->GetAt(0));
		if (pairsFound->Size > i && pairsFound->GetAt(i) == btn)
			continue;
		btn->IsHitTestVisible = true;
	}
}

void MemoryGame::MainPage::AnimateCards()
{
	Point center= Point(0.5f, 0.5f);
	TimeSpan time;
	time.Duration = 30000;
	
	Duration d = Duration(time);
	d.__durationType = DurationType::Automatic;

	RotateTransform ^cardRotate = ref new RotateTransform();						//create Transform
	cardRotate->Angle = 0.0;
	
	Button1Up->RenderTransformOrigin = center;										//asign to center of button
	Button1Up->RenderTransform = cardRotate;
	
	Button2Up->RenderTransformOrigin = center;
	Button2Up->RenderTransform = cardRotate;

	DoubleAnimation ^animBut = ref new DoubleAnimation();							//create animation
	animBut->Duration = d; 

	ElasticEase ^func = ref new ElasticEase();										//create animation function
	func->Oscillations = 2.0;
	func->Springiness = 2.0;
	func->EasingMode = EasingMode::EaseOut;

	animBut->EasingFunction = func;													//add animation func into animation
	
	Storyboard ^cardStory = ref new Storyboard();									//create storyboard
	cardStory->Duration = d;
	cardStory->Children->Append(animBut);
	Storyboard::SetTarget(animBut,cardRotate);
	Storyboard::SetTargetProperty(animBut,"Angle");
	animBut->From = 0.0;
	animBut->To = 360.0;
	animBut->AutoReverse = false;
	
	cardGrid->Resources->Insert("cardStory", cardStory);							//add to resources

	cardStory->Begin();
}
	

void MemoryGame::MainPage::button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Platform::Object ^obj = safe_cast<Button^>(sender)->Content;

	if (safe_cast<Image^>(obj)->Visibility == Windows::UI::Xaml::Visibility::Collapsed)
		safe_cast<Image^>(obj)->Visibility = Windows::UI::Xaml::Visibility::Visible;
	else
		safe_cast<Image^>(obj)->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	
	if (Button1Up == nullptr && Button2Up == nullptr)								//no card up
	{
		Button1Up = safe_cast<Button^>(sender);
		int found = IsFound(Button1Up);
		if (found != NOTFOUND)
		{
			Button1Up->IsHitTestVisible = false;
			card1Up = cardPack[found];
		}
	}
	else if (Button2Up == nullptr) 													//2nd card up
	{
		Button2Up = safe_cast<Button^>(sender);

		tries++;																	//count the pair up
		triesText->Text = tries.ToString();

		int found = IsFound(Button2Up);
		if (found != NOTFOUND)
		{
			card2Up = cardPack[found];

			Button2Up->IsHitTestVisible = false;
		}

		for (int i = 0; i < cardGrid->Children->Size; i++)							//disable rest cards
		{
			Grid^ grid = safe_cast<Grid^>(cardGrid->Children->GetAt(i));
			Button^ btn = safe_cast<Button^>(grid->Children->GetAt(0));
			if (btn == Button1Up || btn == Button2Up)
				continue;
			else
				btn->IsHitTestVisible = false;
		}

		if (card1Up->type == card2Up->type)											//found match cards
		{
			pairsFound->Append(Button1Up);
			pairsFound->Append(Button2Up);

			AnimateCards();
			
			Button1Up->Opacity = 0.5;
			Button2Up->Opacity = 0.5;

			Button1Up->IsEnabled = false;
			Button2Up->IsEnabled = false;
			Button1Up = Button2Up = nullptr;
			
			FlipCards();

			if (++pairCount == cardCount / 2)										//test for end & reset
				GameOver();
		}
		else 																		//not match
		{
			Button1Up->IsHitTestVisible = true;
			Button2Up->IsHitTestVisible = true;
		}
	}
	else																			//both cards up
	{
//		ButtonFlip->Begin();
		safe_cast<Image^>(Button1Up->Content)->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		safe_cast<Image^>(Button2Up->Content)->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		
		Button1Up = nullptr;
		Button2Up = nullptr;	
		card1Up = card2Up = nullptr;
		FlipCards();
	}
}

void MemoryGame::MainPage::GameOver()
{
	double wintime = timer->StopTimer();
	int score = static_cast<double>(pairCount) / tries * 100;

	HideMessages();

	winMessage->Opacity = 1;
	scoreText->Text = score.ToString() + "%";
	
	int secs = (int)wintime % 60; 
	timeText->Text = safe_cast<int>((wintime) / 60).ToString() + "m:" + (secs).ToString() +"s";
}

void MemoryGame::MainPage::HideMessages()
{
	winMessage->Opacity = 0;																			//hide messages 
	playMessage->Opacity = 0;
	startMsg->Opacity = 0;
	scoreText->Text = "";
	timeText->Text = "";
	triesText->Text = tries.ToString();
}

void MemoryGame::MainPage::HowToButton_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	winMessage->Opacity = 0;
	startMsg->Opacity = 0;
	if (playMessage->Opacity == 0)
		playMessage->Opacity = 1;
	else
		playMessage->Opacity = 0;

}

void MemoryGame::MainPage::Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	cardGrid->IsHitTestVisible = false;
	//	for (size_t i = 0; i < cardGrid->Children->Size; ++i)
	//	{
	//		Grid ^grid = safe_cast<Grid^>(cardGrid->Children->GetAt(i));
	////		Grid ^smallgrid = safe_cast<Grid^>(grid->Children->GetAt(0));
	//
	//		auto scale = cardGrid->ActualHeight / grid->ActualHeight * 0.3;
	//
	//		auto scaleTransform = ref new ScaleTransform();
	//		scaleTransform->ScaleX = scale;
	//		scaleTransform->ScaleY = scale;
	//		grid->RenderTransformOrigin = Point(0.0, 0.0);
	//		grid->RenderTransform = scaleTransform;
	//	}
}

void MemoryGame::MainPage::InitializeCardPack()
{
	// load the card pack
	cardPack = ref new Array<Card^>(cardCount)
	{
		ref new Card("Assets/Images/calf.jpg"),
		ref new Card("Assets/Images/calf.jpg"),
		ref new Card("Assets/Images/cat.jpg"),
		ref new Card("Assets/Images/cat.jpg"),
		ref new Card("Assets/Images/chicks.jpg"),
		ref new Card("Assets/Images/chicks.jpg"),
		ref new Card("Assets/Images/deer.jpg"),
		ref new Card("Assets/Images/deer.jpg"),
		ref new Card("Assets/Images/dog.jpg"),
		ref new Card("Assets/Images/dog.jpg"),
		ref new Card("Assets/Images/goat.jpg"),
		ref new Card("Assets/Images/goat.jpg"),
		ref new Card("Assets/Images/mouse.jpg"),
		ref new Card("Assets/Images/mouse.jpg"),
		ref new Card("Assets/Images/owl.jpg"),
		ref new Card("Assets/Images/owl.jpg"),
		ref new Card("Assets/Images/pig.jpg"),
		ref new Card("Assets/Images/pig.jpg"),
		ref new Card("Assets/Images/rabbit.jpg"),
		ref new Card("Assets/Images/rabbit.jpg"),
		ref new Card("Assets/Images/seal.jpg"),
		ref new Card("Assets/Images/seal.jpg"),
		ref new Card("Assets/Images/turtle.jpg"),
		ref new Card("Assets/Images/turtle.jpg")
	};
}

void MemoryGame::MainPage::ShuffleCards()
{
	for (int i = 0; i < cardCount; i++)
	{
		Card ^temp = cardPack[i];
		int randomidx = static_cast<int>(static_cast<double>(rand()) / (RAND_MAX + 1) * cardCount);
		cardPack[i] = cardPack[randomidx];
		cardPack[randomidx] = temp;
	}
}

void MemoryGame::MainPage::InitializeGame()
{
	card1Up = card2Up = nullptr;											//no cards up
	Button1Up = Button1Up = nullptr;										//no buttons pressed

	pairsFound->Clear();													//no cards found
	pairCount = tries = 0;													//no pairs found

	ShuffleCards();															//suffle cards

	for (int i = 0; i < cardCount; i++)										//populate cards & reset UI
	{
		Grid^ grid = safe_cast<Grid^>(cardGrid->Children->GetAt(i));
		Button^ btn = safe_cast<Button^>(grid->Children->GetAt(0));
		Image^ img = safe_cast<Image^>(btn->Content);
		btn->IsHitTestVisible = true;
		btn->IsEnabled = true;
		btn->Background = whiteBrush;
		btn->Opacity = 1;
		img->Source = ref new BitmapImage(ref new Windows::Foundation::Uri("ms-appx:///" + cardPack[i]->type));
		img->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
}

void MemoryGame::MainPage::StartButton_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	InitializeGame();														//start game
	HideMessages();															//hide messages
	cardGrid->IsHitTestVisible = true;										//activate grid
	ButtonTurn->Begin();													//
	timer->StartTimer();													//start time
}


void MemoryGame::MainPage::About_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	AboutInfo ^aboutInfo = ref new AboutInfo();
	Package ^myp = Windows::ApplicationModel::Package::Current;

	aboutInfo->AppName = myp->DisplayName;
	aboutInfo->Description = "A card game to test your memory!";
	aboutInfo->CopyRight = "(c)2015";
	aboutInfo->Version ="Version: 1.3";
	aboutInfo->Logo = myp->Logo->ToString();
	AboutGrid->DataContext = aboutInfo;
}
