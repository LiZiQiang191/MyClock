#pragma once
class CMinutePoint
{
	float m_minute;					//ʱ��
	int m_length;					//��ĳ���
	MyPoint m_end;					//ָ���յ�����
public:
	CMinutePoint();
	~CMinutePoint();
public:
	void InitMinute();												//��ʼ��ʱ��
	void RenderMinute();											//����ʱ��
};

