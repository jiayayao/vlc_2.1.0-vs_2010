// glwin32.h : main header file for the glwin32 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cglwin32App
// See glwin32.cpp for the implementation of this class
//

class Cglwin32App : public CWinApp
{
public:
	Cglwin32App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
