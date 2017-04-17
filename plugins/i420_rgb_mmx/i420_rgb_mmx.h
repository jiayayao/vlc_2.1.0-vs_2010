// i420_rgb_mmx.h : main header file for the i420_rgb_mmx DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci420_rgb_mmxApp
// See i420_rgb_mmx.cpp for the implementation of this class
//

class Ci420_rgb_mmxApp : public CWinApp
{
public:
	Ci420_rgb_mmxApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
