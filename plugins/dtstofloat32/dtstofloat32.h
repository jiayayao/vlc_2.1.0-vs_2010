// dtstofloat32.h : main header file for the dtstofloat32 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdtstofloat32App
// See dtstofloat32.cpp for the implementation of this class
//

class Cdtstofloat32App : public CWinApp
{
public:
	Cdtstofloat32App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
