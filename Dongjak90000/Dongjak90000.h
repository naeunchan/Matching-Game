
// Dongjak90000.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDongjak90000App:
// �� Ŭ������ ������ ���ؼ��� Dongjak90000.cpp�� �����Ͻʽÿ�.
//

class CDongjak90000App : public CWinApp
{
public:
	CDongjak90000App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDongjak90000App theApp;