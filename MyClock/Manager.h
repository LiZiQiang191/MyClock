#pragma once
class CManager
{
	CMyDial * m_pDial;			//������̶���
	CHourPoint * m_pHour;		//����ʱ��
	CMinutePoint * m_pMinute;	//�������
	CSecondPoint * m_pSecond;	//��������
public:
	CManager();
	~CManager();
public:
	void InitClock();			//��ʼ����
	void UpClock();				//���±�
	void RenderClock();			//��Ⱦ��
};

