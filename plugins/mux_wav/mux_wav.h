// mux_wav.h : main header file for the mux_wav DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_wavApp
// See mux_wav.cpp for the implementation of this class
//

class Cmux_wavApp : public CWinApp
{
public:
	Cmux_wavApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
