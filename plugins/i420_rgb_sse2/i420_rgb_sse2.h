// i420_rgb_sse2.h : main header file for the i420_rgb_sse2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci420_rgb_sse2App
// See i420_rgb_sse2.cpp for the implementation of this class
//

class Ci420_rgb_sse2App : public CWinApp
{
public:
	Ci420_rgb_sse2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
