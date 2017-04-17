// i422_yuy2.h : main header file for the i422_yuy2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci422_yuy2App
// See i422_yuy2.cpp for the implementation of this class
//

class Ci422_yuy2App : public CWinApp
{
public:
	Ci422_yuy2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
