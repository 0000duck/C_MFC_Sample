
// C_MFC_Sample.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CC_MFC_SampleApp:
// �аѾ\��@�����O�� C_MFC_Sample.cpp
//

class CC_MFC_SampleApp : public CWinApp
{
public:
	CC_MFC_SampleApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CC_MFC_SampleApp theApp;