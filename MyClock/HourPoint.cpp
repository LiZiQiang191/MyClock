#include "stdafx.h"
#include "HourPoint.h"


CHourPoint::CHourPoint()
{
	m_hour = 0;
	m_length = 0;
	m_end.col = m_end.row = 0;
}


CHourPoint::~CHourPoint()
{
}

void CHourPoint::InitHour()
{
	m_length = (int)((DIAL_LEN / 2) * (1 / 3.0));
	m_hour = (float)(GetOsTime().hour + (GetOsTime().minute + GetOsTime().second / 60.0f) / 60.0f);
	
	m_end.col = DIAL_LEN / 2 + int(m_length * sin(m_hour * (PI /6)));
	m_end.row = DIAL_LEN / 2 - int(m_length * cos(m_hour * (PI / 6)));
}


void CHourPoint::RenderHour()
{
	setlinecolor(HOUR_POINT_COLOR);
	line(DIAL_LEN / 2, DIAL_LEN / 2, m_end.col, m_end.row);	
}
