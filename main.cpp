// a main file to be movied to startup
#define _WIN32_WINNT 0x0500
#include <Windows.h>

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	SwapMouseButton(true);
	
	// finding battery percentage
	SYSTEM_POWER_STATUS status;
	SYSTEMTIME time;
	
	GetSystemTime(&time);
	GetSystemPowerStatus(&status);
	int life = status.BatteryLifePercent;
	
	if (status.BatteryLifePercent == 69)
	{
		MessageBox(NULL, "damn son", "OOOoooo DAMN\n69 PERCENT!!!", NULL);
	}
	
	if (time.wHour - 2 == 6 && time.wMinute == 9)
	{
		MessageBox(NULL, "OH DAMN", "LOOK AT THE TIME\n69!!!!!!", NULL);
	}
	
	else
	{
		// do nothing
		return 0;
	}
	
	return 0;
}