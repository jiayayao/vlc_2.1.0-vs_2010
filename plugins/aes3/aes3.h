// aes3.h : main header file for the aes3 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caes3App
// See aes3.cpp for the implementation of this class
//

class Caes3App : public CWinApp
{
public:
	Caes3App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
