// rawaud.h : main header file for the rawaud DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrawaudApp
// See rawaud.cpp for the implementation of this class
//

class CrawaudApp : public CWinApp
{
public:
	CrawaudApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
