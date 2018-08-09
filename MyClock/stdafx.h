// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <graphics.h>
#include <math.h>
#include <string>
#include <time.h>

using std::string;
#define DIAL_LEN 400
#define PI 3.1415926535

//===================
#define DIAL_COLOR RGB(52,88,174)
#define DIAL_COLOR_1 BLACK
#define FONT_COLOR BLACK
#define HOUR_POINT_COLOR BLACK
#define MINUTE_POINT_COLOR RGB(10, 10, 10)
#define SECOND_POINT_COLOR RGB(29, 29, 29)
//===================


struct MyPoint
{
	int row;
	int col;
};

struct Mytime
{
	int hour;
	int minute;
	int second;
};
// TODO: reference additional headers your program requires here
#include "Tools.h" 
#include "MyDial.h"
#include "HourPoint.h"
#include "MinutePoint.h"
#include "SecondPoint.h"
#include "Manager.h"

