#include "Report.h"
#include "Pretprogram.h"
#include "AdminFunctionals.h"
#include "AnalystFunctionals.h"

int kraj = 1;

int main()
{
	system("Color 2");
	Pretprogram();
	while (kraj)
	{
		char option;
		AdminAnalystChoose(option);
		if (option == '1') { AdminFunctionals(); }
		if (option == '2') { AnalystFunctionals(); }
	}
}