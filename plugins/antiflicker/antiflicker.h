// antiflicker.h : main header file for the antiflicker DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CantiflickerApp
// See antiflicker.cpp for the implementation of this class
//

class CantiflickerApp : public CWinApp
{
public:
	CantiflickerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
