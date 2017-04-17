// mpgv.h : main header file for the mpgv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmpgvApp
// See mpgv.cpp for the implementation of this class
//

class CmpgvApp : public CWinApp
{
public:
	CmpgvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
