// subsdelay.h : main header file for the subsdelay DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsubsdelayApp
// See subsdelay.cpp for the implementation of this class
//

class CsubsdelayApp : public CWinApp
{
public:
	CsubsdelayApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
