// screen.h : main header file for the screen DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CscreenApp
// See screen.cpp for the implementation of this class
//

class CscreenApp : public CWinApp
{
public:
	CscreenApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
