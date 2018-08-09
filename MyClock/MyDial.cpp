#include "stdafx.h"
#include "MyDial.h"


CMyDial::CMyDial()
{
	m_center.row = m_center.col = 0;
	m_r = 0;
	memset(m_num, 0, sizeof(TCHAR[3]) * 12);
	for (int i = 0; i < 12; i++)
	{
		num_pos[i].row = num_pos[i].col = 0;
	}
	m_font_size = 0;
}


CMyDial::~CMyDial()
{
}

void CMyDial::InitDail()
{
	m_r = DIAL_LEN/2 ;					//初始化半径
	m_center.row = m_center.col = m_r;	//初始化圆心坐标
	for (int i = 0; i< 12; ++i)
	{
		_stprintf_s(m_num[i], _T("%d"), i+1);
	}
	m_font_size = (int) m_r / 5;
	for (int i= 0;i < 12; ++i)
	{
		num_pos[i].col = (int)(m_center.col + sin((i + 1) * (PI / 6)) * (m_r - m_font_size /2) - (m_font_size / 2)/ sqrt(2)) ;
		num_pos[i].row = (int)(m_center.row - cos((i + 1) * (PI / 6)) * (m_r - m_font_size / 2) - (m_font_size / 2) / sqrt(2));
	}
}

void CMyDial::RenderDail()
{
	BeginBatchDraw();
	setfillcolor(DIAL_COLOR);
	solidcircle(m_center.col, m_center.row, m_r);	//先画一个园

	setfillcolor(DIAL_COLOR_1);
	solidcircle(m_center.col, m_center.row, m_font_size / 3);	//再画一个园

	setbkcolor(DIAL_COLOR);


	settextstyle((int)(m_font_size / sqrt(2)) / 2, 0, _T("宋体"));
	outtextxy((int)(DIAL_LEN *(7 / 20.0)), (int)(DIAL_LEN *(5 / 7.0)), _T(" Made By ZiQiang"));

	settextcolor(FONT_COLOR);
	settextstyle((int)(m_font_size/sqrt(2)), 0, _T("黑体"));
	for (int i = 0; i < 12; ++i)
	{
		outtextxy(num_pos[i].col, num_pos[i].row, m_num[i]);
	}


	EndBatchDraw();
}


