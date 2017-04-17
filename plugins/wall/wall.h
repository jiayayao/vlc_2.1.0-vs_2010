// wall.h : main header file for the wall DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CwallApp
// See wall.cpp for the implementation of this class
//

class CwallApp : public CWinApp
{
public:
	CwallApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
