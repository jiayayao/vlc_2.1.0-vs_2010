// invert.h : main header file for the invert DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CinvertApp
// See invert.cpp for the implementation of this class
//

class CinvertApp : public CWinApp
{
public:
	CinvertApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
