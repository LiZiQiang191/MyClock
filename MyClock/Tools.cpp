#include "Tools.h"
#include "stdafx.h"


Mytime GetOsTime()
{
	Mytime tempTime;
	time_t t;
	struct tm * lt;
	time(&t);
	lt = localtime(&t);//תΪʱ��ṹ��
	tempTime.hour = lt->tm_hour;
	tempTime.minute = lt->tm_min;
	tempTime.second = lt->tm_sec;

	return tempTime;
}
