// mux_mpjpeg.h : main header file for the mux_mpjpeg DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmux_mpjpegApp
// See mux_mpjpeg.cpp for the implementation of this class
//

class Cmux_mpjpegApp : public CWinApp
{
public:
	Cmux_mpjpegApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
