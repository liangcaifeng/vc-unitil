// vc-unitil.h : vc-unitil DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CvcunitilApp
// �йش���ʵ�ֵ���Ϣ������� vc-unitil.cpp
//

class CvcunitilApp : public CWinApp
{
public:
	CvcunitilApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
