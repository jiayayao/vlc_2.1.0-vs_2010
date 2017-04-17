// mux_ps.h : main header file for the mux_ps DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_psApp
// See mux_ps.cpp for the implementation of this class
//

class Cmux_psApp : public CWinApp
{
public:
	Cmux_psApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
