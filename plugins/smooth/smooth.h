// smooth.h : main header file for the smooth DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsmoothApp
// See smooth.cpp for the implementation of this class
//

class CsmoothApp : public CWinApp
{
public:
	CsmoothApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
