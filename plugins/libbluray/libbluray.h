// libbluray.h : main header file for the libbluray DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClibblurayApp
// See libbluray.cpp for the implementation of this class
//

class ClibblurayApp : public CWinApp
{
public:
	ClibblurayApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
