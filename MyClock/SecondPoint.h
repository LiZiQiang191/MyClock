#pragma once
class CSecondPoint
{
	float m_second;					//ʱ��
	int m_length;					//��ĳ���
	MyPoint m_end;					//ָ���յ�����
public:
	CSecondPoint();
	~CSecondPoint();
public:
	void InitSecond();												//��ʼ��ʱ��
	void RenderSecond();											//����ʱ��
};

