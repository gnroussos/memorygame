﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class Button;
                ref class RichTextBlock;
                ref class StackPanel;
                ref class TextBlock;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Documents {
                ref class Run;
            }
        }
    }
}

namespace MemoryGame
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::Grid^ messageArea;
        private: ::Windows::UI::Xaml::Controls::Grid^ cardGrid;
        private: ::Windows::UI::Xaml::Controls::Button^ button24;
        private: ::Windows::UI::Xaml::Controls::Button^ button23;
        private: ::Windows::UI::Xaml::Controls::Button^ button22;
        private: ::Windows::UI::Xaml::Controls::Button^ button21;
        private: ::Windows::UI::Xaml::Controls::Button^ button20;
        private: ::Windows::UI::Xaml::Controls::Button^ button19;
        private: ::Windows::UI::Xaml::Controls::Button^ button18;
        private: ::Windows::UI::Xaml::Controls::Button^ button17;
        private: ::Windows::UI::Xaml::Controls::Button^ button16;
        private: ::Windows::UI::Xaml::Controls::Button^ button15;
        private: ::Windows::UI::Xaml::Controls::Button^ button14;
        private: ::Windows::UI::Xaml::Controls::Button^ button13;
        private: ::Windows::UI::Xaml::Controls::Button^ button12;
        private: ::Windows::UI::Xaml::Controls::Button^ button11;
        private: ::Windows::UI::Xaml::Controls::Button^ button10;
        private: ::Windows::UI::Xaml::Controls::Button^ button9;
        private: ::Windows::UI::Xaml::Controls::Button^ button8;
        private: ::Windows::UI::Xaml::Controls::Button^ button7;
        private: ::Windows::UI::Xaml::Controls::Button^ button6;
        private: ::Windows::UI::Xaml::Controls::Button^ button5;
        private: ::Windows::UI::Xaml::Controls::Button^ button4;
        private: ::Windows::UI::Xaml::Controls::Button^ button3;
        private: ::Windows::UI::Xaml::Controls::Button^ button2;
        private: ::Windows::UI::Xaml::Controls::Button^ button1;
        private: ::Windows::UI::Xaml::Controls::RichTextBlock^ winMessage;
        private: ::Windows::UI::Xaml::Controls::RichTextBlock^ startMsg;
        private: ::Windows::UI::Xaml::Controls::RichTextBlock^ playMessage;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ ButtonPanel;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ statsArea;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ gameoverStats;
        private: ::Windows::UI::Xaml::Documents::Run^ scoreBox;
        private: ::Windows::UI::Xaml::Documents::Run^ scoreText;
        private: ::Windows::UI::Xaml::Documents::Run^ timeBox;
        private: ::Windows::UI::Xaml::Documents::Run^ timeText;
        private: ::Windows::UI::Xaml::Documents::Run^ triesBox;
        private: ::Windows::UI::Xaml::Documents::Run^ triesText;
        private: ::Windows::UI::Xaml::Controls::Button^ StartButton;
        private: ::Windows::UI::Xaml::Controls::Button^ HowToButton;
    };
}

