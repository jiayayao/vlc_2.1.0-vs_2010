// x264.h : main header file for the x264 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cx264App
// See x264.cpp for the implementation of this class
//

class Cx264App : public CWinApp
{
public:
	Cx264App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
