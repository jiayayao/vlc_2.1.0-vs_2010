// i420_rgb.h : main header file for the i420_rgb DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci420_rgbApp
// See i420_rgb.cpp for the implementation of this class
//

class Ci420_rgbApp : public CWinApp
{
public:
	Ci420_rgbApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
