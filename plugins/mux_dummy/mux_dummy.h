// mux_dummy.h : main header file for the mux_dummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_dummyApp
// See mux_dummy.cpp for the implementation of this class
//

class Cmux_dummyApp : public CWinApp
{
public:
	Cmux_dummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
