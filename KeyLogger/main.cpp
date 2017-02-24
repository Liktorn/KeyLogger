#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //this is for not opening a console window when opening the .exe file
//the program will continue to run in the background though!!

#include <iostream>
#include <Windows.h>	//for MSG

using namespace std;

int main()
{
	MSG Msg;	//initilize a MSG called Msg
	//Getting a massage, storing it in Msg
	while (GetMessage(&Msg, NULL, 0, 0))
	{
		TranslateMessage(&Msg);  //Translating and forwarding the Msg
		DispatchMessage(&Msg);	//which will never happen, so the program will never end
	}




	return 0;
}