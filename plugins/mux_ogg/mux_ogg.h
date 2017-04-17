// mux_ogg.h : main header file for the mux_ogg DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_oggApp
// See mux_ogg.cpp for the implementation of this class
//

class Cmux_oggApp : public CWinApp
{
public:
	Cmux_oggApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
