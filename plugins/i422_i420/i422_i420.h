// i422_i420.h : main header file for the i422_i420 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ci422_i420App
// See i422_i420.cpp for the implementation of this class
//

class Ci422_i420App : public CWinApp
{
public:
	Ci422_i420App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
