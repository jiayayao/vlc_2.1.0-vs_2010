// i420_yuy2_mmx.h : main header file for the i420_yuy2_mmx DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci420_yuy2_mmxApp
// See i420_yuy2_mmx.cpp for the implementation of this class
//

class Ci420_yuy2_mmxApp : public CWinApp
{
public:
	Ci420_yuy2_mmxApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
