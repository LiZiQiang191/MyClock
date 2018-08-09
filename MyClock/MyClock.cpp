// ÖÆ×÷ÖÓ±í.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	initgraph(DIAL_LEN, DIAL_LEN);
	CManager * pClock = new CManager;
	pClock->InitClock();

	while (true)
	{
		pClock->UpClock();
		pClock->RenderClock();
	}

	closegraph();


	return 0;
}

