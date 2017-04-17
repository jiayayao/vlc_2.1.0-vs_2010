// yuy2_i420.h : main header file for the yuy2_i420 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cyuy2_i420App
// See yuy2_i420.cpp for the implementation of this class
//

class Cyuy2_i420App : public CWinApp
{
public:
	Cyuy2_i420App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
