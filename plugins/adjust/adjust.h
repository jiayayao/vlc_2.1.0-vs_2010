// adjust.h : main header file for the adjust DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CadjustApp
// See adjust.cpp for the implementation of this class
//

class CadjustApp : public CWinApp
{
public:
	CadjustApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
