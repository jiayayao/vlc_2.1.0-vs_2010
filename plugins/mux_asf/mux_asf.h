// mux_asf.h : main header file for the mux_asf DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_asfApp
// See mux_asf.cpp for the implementation of this class
//

class Cmux_asfApp : public CWinApp
{
public:
	Cmux_asfApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
