#pragma once
class CHourPoint
{
	float m_hour;					//时间
	int m_length;					//针的长度
	MyPoint m_end;					//指针终点坐标
public:
	CHourPoint();
	~CHourPoint();
public:
	void InitHour();												//初始化时间
	void RenderHour();												//画出时针
};

