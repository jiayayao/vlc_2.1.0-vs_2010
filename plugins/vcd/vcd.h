// vcd.h : main header file for the vcd DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvcdApp
// See vcd.cpp for the implementation of this class
//

class CvcdApp : public CWinApp
{
public:
	CvcdApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
