﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::MemoryGame::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::MemoryGame::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                ::Windows::UI::Xaml::Controls::Page^ element1 = safe_cast<::Windows::UI::Xaml::Controls::Page^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Page^>(element1))->Loaded += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::Page_Loaded);
            }
            break;
        case 2:
            {
                this->StartButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->StartButton))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&MainPage::StartButton_Tapped);
            }
            break;
        case 3:
            {
                this->statsArea = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
            }
            break;
        case 4:
            {
                this->messageArea = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 5:
            {
                this->cardGrid = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 6:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element6 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element6))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element6))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 7:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element7 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element7))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element7))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 8:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element8 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element8))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element8))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 9:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element9 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element9))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element9))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 10:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element10 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element10))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element10))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 11:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element11 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element11))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element11))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 12:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element12 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element12))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element12))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 13:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element13 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element13))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element13))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 14:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element14 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element14))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element14))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 15:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element15 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element15))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element15))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 16:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element16 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element16))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element16))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 17:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element17 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element17))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element17))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 18:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element18 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element18))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element18))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 19:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element19 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element19))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element19))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 20:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element20 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element20))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element20))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 21:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element21 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element21))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element21))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 22:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element22 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element22))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element22))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 23:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element23 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element23))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element23))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 24:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element24 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element24))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element24))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 25:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element25 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element25))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element25))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 26:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element26 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element26))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element26))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 27:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element27 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element27))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element27))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 28:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element28 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element28))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element28))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 29:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element29 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element29))->PointerEntered += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Entered);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element29))->PointerExited += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Card_Exited);
            }
            break;
        case 30:
            {
                this->button24 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button24))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 31:
            {
                this->button23 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button23))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 32:
            {
                this->button22 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button22))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 33:
            {
                this->button21 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button21))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 34:
            {
                this->button20 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button20))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 35:
            {
                this->button19 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button19))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 36:
            {
                this->button18 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button18))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 37:
            {
                this->button17 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button17))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 38:
            {
                this->button16 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button16))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 39:
            {
                this->button15 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button15))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 40:
            {
                this->button14 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button14))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 41:
            {
                this->button13 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button13))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 42:
            {
                this->button12 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button12))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 43:
            {
                this->button11 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button11))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 44:
            {
                this->button10 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button10))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 45:
            {
                this->button9 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button9))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 46:
            {
                this->button8 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button8))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 47:
            {
                this->button7 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button7))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 48:
            {
                this->button6 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button6))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 49:
            {
                this->button5 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button5))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 50:
            {
                this->button4 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button4))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 51:
            {
                this->button3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button3))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 52:
            {
                this->button2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button2))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 53:
            {
                this->button1 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->button1))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::button_Click);
            }
            break;
        case 54:
            {
                this->winMessage = safe_cast<::Windows::UI::Xaml::Controls::RichTextBlock^>(__target);
            }
            break;
        case 55:
            {
                this->startMsg = safe_cast<::Windows::UI::Xaml::Controls::RichTextBlock^>(__target);
            }
            break;
        case 56:
            {
                this->playMessage = safe_cast<::Windows::UI::Xaml::Controls::RichTextBlock^>(__target);
            }
            break;
        case 57:
            {
                this->gameoverStats = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 58:
            {
                this->scoreBox = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 59:
            {
                this->scoreText = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 60:
            {
                this->timeBox = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 61:
            {
                this->timeText = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 62:
            {
                this->triesBox = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 63:
            {
                this->triesText = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 64:
            {
                this->AboutButton = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(this->AboutButton))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&MainPage::About_Tapped);
            }
            break;
        case 65:
            {
                this->HowToButton = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(this->HowToButton))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::MemoryGame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&MainPage::HowToButton_Tapped);
            }
            break;
        case 66:
            {
                this->AboutGrid = safe_cast<::Windows::UI::Xaml::Controls::ItemsControl^>(__target);
            }
            break;
        case 67:
            {
                this->AboutLogo = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 68:
            {
                this->AboutCopyR = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 69:
            {
                this->AboutDescription = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 70:
            {
                this->AboutVersion = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
        case 71:
            {
                this->AboutName = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::MemoryGame::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


