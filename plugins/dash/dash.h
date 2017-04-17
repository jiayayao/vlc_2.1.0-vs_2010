// dash.h : main header file for the dash DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdashApp
// See dash.cpp for the implementation of this class
//

class CdashApp : public CWinApp
{
public:
	CdashApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
