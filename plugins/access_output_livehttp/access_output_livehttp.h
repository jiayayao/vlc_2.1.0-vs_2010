// access_output_livehttp.h : main header file for the access_output_livehttp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_output_livehttpApp
// See access_output_livehttp.cpp for the implementation of this class
//

class Caccess_output_livehttpApp : public CWinApp
{
public:
	Caccess_output_livehttpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
