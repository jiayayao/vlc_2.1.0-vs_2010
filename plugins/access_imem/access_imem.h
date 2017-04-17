// access_imem.h : main header file for the access_imem DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_imemApp
// See access_imem.cpp for the implementation of this class
//

class Caccess_imemApp : public CWinApp
{
public:
	Caccess_imemApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
