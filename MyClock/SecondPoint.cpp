#include "stdafx.h"
#include "SecondPoint.h"


CSecondPoint::CSecondPoint()
{
	m_second = 0;
	m_length = 0;
	m_end.col = m_end.row = 0;
}


CSecondPoint::~CSecondPoint()
{
}

void CSecondPoint::InitSecond()
{
	m_length = (int)((DIAL_LEN / 2) * (2 / 3.0));
	m_second = (float)( GetOsTime().second);

	m_end.col = DIAL_LEN / 2 + int(m_length * sin(m_second * (PI / 30)));
	m_end.row = DIAL_LEN / 2 - int(m_length * cos(m_second * (PI / 30)));
}

void CSecondPoint::RenderSecond()
{
	setlinecolor(SECOND_POINT_COLOR);
	line(DIAL_LEN / 2, DIAL_LEN / 2, m_end.col, m_end.row);
}
