// a52tofloat32.h : main header file for the a52tofloat32 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ca52tofloat32App
// See a52tofloat32.cpp for the implementation of this class
//

class Ca52tofloat32App : public CWinApp
{
public:
	Ca52tofloat32App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
