// i422_yuy2_mmx.h : main header file for the i422_yuy2_mmx DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci422_yuy2_mmxApp
// See i422_yuy2_mmx.cpp for the implementation of this class
//

class Ci422_yuy2_mmxApp : public CWinApp
{
public:
	Ci422_yuy2_mmxApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
