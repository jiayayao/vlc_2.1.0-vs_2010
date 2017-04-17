// bluescreen.h : main header file for the bluescreen DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CbluescreenApp
// See bluescreen.cpp for the implementation of this class
//

class CbluescreenApp : public CWinApp
{
public:
	CbluescreenApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
