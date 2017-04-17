// httplive.h : main header file for the httplive DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ChttpliveApp
// See httplive.cpp for the implementation of this class
//

class ChttpliveApp : public CWinApp
{
public:
	ChttpliveApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
