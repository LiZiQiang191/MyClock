#pragma once
class CHourPoint
{
	float m_hour;					//ʱ��
	int m_length;					//��ĳ���
	MyPoint m_end;					//ָ���յ�����
public:
	CHourPoint();
	~CHourPoint();
public:
	void InitHour();												//��ʼ��ʱ��
	void RenderHour();												//����ʱ��
};

