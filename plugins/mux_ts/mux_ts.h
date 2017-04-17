// mux_ts.h : main header file for the mux_ts DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_tsApp
// See mux_ts.cpp for the implementation of this class
//

class Cmux_tsApp : public CWinApp
{
public:
	Cmux_tsApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
