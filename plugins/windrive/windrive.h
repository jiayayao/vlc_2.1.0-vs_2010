// windrive.h : main header file for the windrive DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CwindriveApp
// See windrive.cpp for the implementation of this class
//

class CwindriveApp : public CWinApp
{
public:
	CwindriveApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
