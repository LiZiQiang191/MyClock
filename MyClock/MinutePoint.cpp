#include "stdafx.h"
#include "MinutePoint.h"


CMinutePoint::CMinutePoint()
{
	m_minute = 0;
	m_length = 0;
	m_end.col = m_end.row = 0;
}


CMinutePoint::~CMinutePoint()
{
}

void CMinutePoint::InitMinute()
{
	m_length = (int)((DIAL_LEN / 2) * (1 / 2.0));
	m_minute = (float)(GetOsTime().minute + GetOsTime().second / 60.0f);

	m_end.col = DIAL_LEN / 2 + int(m_length * sin(m_minute * (PI / 30)));
	m_end.row = DIAL_LEN / 2 - int(m_length * cos(m_minute * (PI / 30)));
}

void CMinutePoint::RenderMinute()
{
	setlinecolor(MINUTE_POINT_COLOR);
	line(DIAL_LEN / 2, DIAL_LEN / 2, m_end.col, m_end.row);
}


