// opus.h : main header file for the opus DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CopusApp
// See opus.cpp for the implementation of this class
//

class CopusApp : public CWinApp
{
public:
	CopusApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
