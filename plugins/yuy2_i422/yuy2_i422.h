// yuy2_i422.h : main header file for the yuy2_i422 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cyuy2_i422App
// See yuy2_i422.cpp for the implementation of this class
//

class Cyuy2_i422App : public CWinApp
{
public:
	Cyuy2_i422App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
