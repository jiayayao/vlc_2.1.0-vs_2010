// mux_avi.h : main header file for the mux_avi DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_aviApp
// See mux_avi.cpp for the implementation of this class
//

class Cmux_aviApp : public CWinApp
{
public:
	Cmux_aviApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
