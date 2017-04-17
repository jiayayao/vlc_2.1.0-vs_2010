// rss.h : main header file for the rss DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrssApp
// See rss.cpp for the implementation of this class
//

class CrssApp : public CWinApp
{
public:
	CrssApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
