#include "stdafx.h"
#include "Manager.h"


CManager::CManager()
{
	m_pDial = NULL;
	m_pHour = NULL;
	m_pMinute = NULL;
	m_pSecond = NULL;
}


CManager::~CManager()
{
	if (m_pDial)
		delete[] m_pDial;
	m_pDial = NULL;

	if (m_pHour)
		delete[] m_pHour;
	m_pHour = NULL;

	if (m_pMinute)
		delete[] m_pMinute;
	m_pMinute = NULL;
	
	if (m_pSecond)
		delete[] m_pSecond;
	m_pSecond = NULL;
}

void CManager::InitClock()
{
	m_pDial = new CMyDial;
	m_pDial->InitDail();

	m_pHour = new CHourPoint;
	m_pHour->InitHour();

	m_pMinute = new CMinutePoint;
	m_pMinute->InitMinute();

	m_pSecond = new CSecondPoint;
	m_pSecond->InitSecond();
}

void CManager::UpClock()
{
	m_pHour->InitHour();
	m_pMinute->InitMinute();
	m_pSecond->InitSecond();
}

void CManager::RenderClock()

{
	BeginBatchDraw();
	m_pDial->RenderDail();
	m_pHour->RenderHour();
	m_pMinute->RenderMinute();
	m_pSecond->RenderSecond();
	EndBatchDraw();
}
