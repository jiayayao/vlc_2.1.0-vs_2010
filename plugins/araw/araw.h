// araw.h : main header file for the araw DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CarawApp
// See araw.cpp for the implementation of this class
//

class CarawApp : public CWinApp
{
public:
	CarawApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
