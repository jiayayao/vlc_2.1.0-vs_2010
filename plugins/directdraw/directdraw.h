// directdraw.h : main header file for the directdraw DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdirectdrawApp
// See directdraw.cpp for the implementation of this class
//

class CdirectdrawApp : public CWinApp
{
public:
	CdirectdrawApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
