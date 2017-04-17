// au.h : main header file for the au DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CauApp
// See au.cpp for the implementation of this class
//

class CauApp : public CWinApp
{
public:
	CauApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
