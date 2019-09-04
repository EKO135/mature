// a main file to be movied to startup
#define _WIN32_WINNT 0x0500
#include <Windows.h>

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	SwapMouseButton(true);
	
	while (1)
	{
		// finding battery percentage
		SYSTEM_POWER_STATUS status;
		SYSTEMTIME time;
	
		GetLocalTime(&time);
		GetSystemPowerStatus(&status);
		int life = status.BatteryLifePercent;
	
		if (status.BatteryLifePercent == 69){
			MessageBox(NULL, "OOOHHHH DAMN\nBATTERY AT 69 PERCENT!!!", "DAMN SON", NULL);
		}
	
		if (time.wHour == 18 && time.wMinute == 9){
			MessageBox(NULL, "LOOK AT THE TIME\n69!!!!!!\nTime to go to bed (;", "OH DAMN", NULL);
		}
	
		if (time.wHour == 06 && time.wMinute == 9){
			MessageBox(NULL, "LOOK AT THE TIME\n69!!!!!!\nhave u had ur brakefast?! (;", "OH DAMN", NULL);
		}
		
		else {continue;}
	}
	
	// good pracice
	return 0;
}
