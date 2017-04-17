// folder.h : main header file for the folder DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CfolderApp
// See folder.cpp for the implementation of this class
//

class CfolderApp : public CWinApp
{
public:
	CfolderApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
