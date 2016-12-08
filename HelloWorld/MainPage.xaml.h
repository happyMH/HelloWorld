//
// MainPage.xaml.h
// MainPage 类的声明。
//

#pragma once

#include "MainPage.g.h"

namespace HelloWorld
{
	/// <summary>
	/// 可用于自身或导航至 Frame 内部的空白页。
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
		{
			greetingOutput->Text = "Hello," + nameInput->Text + "!";
			//subFrame->Navigate(TypeName(Page2::typeid));
			function(1,2);
		}

		double function(double, double);
	};
}
