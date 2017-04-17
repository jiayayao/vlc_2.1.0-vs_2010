// rawvid.h : main header file for the rawvid DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrawvidApp
// See rawvid.cpp for the implementation of this class
//

class CrawvidApp : public CWinApp
{
public:
	CrawvidApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
