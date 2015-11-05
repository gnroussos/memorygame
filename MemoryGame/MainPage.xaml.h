//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include <Windows.h>

#define NOTFOUND -1

namespace MemoryGame
{
	
	public ref class Card sealed
	{
	public:
		[Windows::Foundation::Metadata::DefaultOverload]
		Card() {}
		
		Card(Platform::String ^t)
		{
			type = t;
		}

		// Copy constructor 
		Card(Card^ card)
		{
			type = card->type;
		}

	public:
		property Platform::String^ type;                             // type ~ image name
	};

// class to count time - using "old" windows code into 
	private ref class HRTimer sealed
	{
	private:
		LARGE_INTEGER start;		// Stores start ime
		LARGE_INTEGER stop;			// Stores stop time
		double frequency;			// Time for one clock tick in seconds

	public:
		HRTimer(void) : frequency(1.0 / GetFrequency()) { }

		// Get the timer frequency - clock ticks per second
		double GetFrequency(void)
		{
			LARGE_INTEGER proc_freq;
			QueryPerformanceFrequency(&proc_freq);
			return static_cast <double> (proc_freq.QuadPart);
		}
		// Start the timer
		void StartTimer(void)
		{
			QueryPerformanceCounter(&start);
		}
		// Stop the timer and return elapsed time in seconds
		double StopTimer(void)
		{	
			QueryPerformanceCounter(&stop);

			return ((stop.QuadPart - start.QuadPart) * frequency);
		}
	};


	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		HRTimer ^timer;													//timer 

		int cardCount;                                                  // The number of cards
		int tries;
		
		Windows::UI::Xaml::Media::SolidColorBrush^ steelBrush;				// Card highlight color
		Windows::UI::Xaml::Media::SolidColorBrush^ azureBrush;				// Card normal color
		Windows::UI::Xaml::Media::SolidColorBrush^ redBrush;				// Card found color

		Platform::Array<Card^>^ cardPack;                              // The pack of cards
		Windows::UI::Xaml::Controls::Button ^Button1Up;
		Windows::UI::Xaml::Controls::Button ^Button2Up;
		Platform::Collections::Vector<Windows::UI::Xaml::Controls::Button^>^ pairsFound;                  // Pairs found in the game
//// Game records
		Card^  card1Up;                                                    // 1st card turned up
		Card^  card2Up;                                                    // 2nd card turned up
		int pairCount;                                                     // Number of pairs found
		
		void InitializeCardPack();                                         // Initializes cardPack to hold two of each card
		void InitializeGame();                                             // Sets up a game with a shuffled cardPack
		void ShuffleCards();                                               // Shuffle the cards
		void GameOver();
//		void DisableCardUp(Card^ card);
		int IsFound(Windows::UI::Xaml::Controls::Button ^B);
		void HideMessages();


		void Card_Entered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
		void Card_Exited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
		void button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void HowToButton_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
		void Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void StartButton_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
	};
}
