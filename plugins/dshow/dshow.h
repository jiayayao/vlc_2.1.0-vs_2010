// dshow.h : main header file for the dshow DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdshowApp
// See dshow.cpp for the implementation of this class
//

class CdshowApp : public CWinApp
{
public:
	CdshowApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
