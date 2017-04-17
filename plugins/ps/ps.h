// ps.h : main header file for the ps DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CpsApp
// See ps.cpp for the implementation of this class
//

class CpsApp : public CWinApp
{
public:
	CpsApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
