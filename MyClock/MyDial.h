#pragma once
class CMyDial
{ 
	MyPoint m_center;		//Բ������
	int m_r;				//Բ�İ뾶
	TCHAR  m_num[12][3];		//�̶�
	MyPoint num_pos[12];	//ÿһ���̶ȵ����꣨���Ͻǣ�  
	int m_font_size;		//���������С�����ð�ס�����԰��ֱ����
public:
	CMyDial();
	~CMyDial();
public:
	void InitDail();		//��ʼ������
	void RenderDail();		//���Ʊ���
};

