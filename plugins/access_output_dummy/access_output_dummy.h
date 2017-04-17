// access_output_dummy.h : main header file for the access_output_dummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_output_dummyApp
// See access_output_dummy.cpp for the implementation of this class
//

class Caccess_output_dummyApp : public CWinApp
{
public:
	Caccess_output_dummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
