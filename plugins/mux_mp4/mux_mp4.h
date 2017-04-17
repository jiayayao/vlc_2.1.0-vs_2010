// mux_mp4.h : main header file for the mux_mp4 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_mp4App
// See mux_mp4.cpp for the implementation of this class
//

class Cmux_mp4App : public CWinApp
{
public:
	Cmux_mp4App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
