// gme.h : main header file for the gme DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgmeApp
// See gme.cpp for the implementation of this class
//

class CgmeApp : public CWinApp
{
public:
	CgmeApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
