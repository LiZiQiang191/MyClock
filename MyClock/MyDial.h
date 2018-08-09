#pragma once
class CMyDial
{ 
	MyPoint m_center;		//圆心坐标
	int m_r;				//圆心半径
	TCHAR  m_num[12][3];		//刻度
	MyPoint num_pos[12];	//每一个刻度的坐标（左上角）  
	int m_font_size;		//保存字体大小（正好包住字体的园的直径）
public:
	CMyDial();
	~CMyDial();
public:
	void InitDail();		//初始化表盘
	void RenderDail();		//绘制表盘
};

