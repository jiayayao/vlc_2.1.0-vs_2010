// a52.h : main header file for the a52 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ca52App
// See a52.cpp for the implementation of this class
//

class Ca52App : public CWinApp
{
public:
	Ca52App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
