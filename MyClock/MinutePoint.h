#pragma once
class CMinutePoint
{
	float m_minute;					//时间
	int m_length;					//针的长度
	MyPoint m_end;					//指针终点坐标
public:
	CMinutePoint();
	~CMinutePoint();
public:
	void InitMinute();												//初始化时间
	void RenderMinute();											//画出时针
};

