// wingdi.h : main header file for the wingdi DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CwingdiApp
// See wingdi.cpp for the implementation of this class
//

class CwingdiApp : public CWinApp
{
public:
	CwingdiApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
