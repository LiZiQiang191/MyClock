#pragma once
class CManager
{
	CMyDial * m_pDial;			//定义表盘对象
	CHourPoint * m_pHour;		//定义时针
	CMinutePoint * m_pMinute;	//定义分针
	CSecondPoint * m_pSecond;	//定义秒针
public:
	CManager();
	~CManager();
public:
	void InitClock();			//初始化表
	void UpClock();				//更新表
	void RenderClock();			//渲染表
};

