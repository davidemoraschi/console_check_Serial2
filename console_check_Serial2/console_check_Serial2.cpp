// console_check_Serial2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "C:\develop\Serial\Serial.h"

int _tmain(int argc, _TCHAR* argv[])
{
		//cout << "Opening com port"<< endl;
		tstring commPortName(TEXT("COM2"));
		Serial serial(commPortName);

	return 0;
}

