// flacsys.h : main header file for the flacsys DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CflacsysApp
// See flacsys.cpp for the implementation of this class
//

class CflacsysApp : public CWinApp
{
public:
	CflacsysApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
