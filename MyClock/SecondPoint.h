#pragma once
class CSecondPoint
{
	float m_second;					//时间
	int m_length;					//针的长度
	MyPoint m_end;					//指针终点坐标
public:
	CSecondPoint();
	~CSecondPoint();
public:
	void InitSecond();												//初始化时间
	void RenderSecond();											//画出时针
};

