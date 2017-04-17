// mp4.h : main header file for the mp4 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmp4App
// See mp4.cpp for the implementation of this class
//

class Cmp4App : public CWinApp
{
public:
	Cmp4App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
