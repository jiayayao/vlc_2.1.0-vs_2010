// access_output_http.h : main header file for the access_output_http DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_output_httpApp
// See access_output_http.cpp for the implementation of this class
//

class Caccess_output_httpApp : public CWinApp
{
public:
	Caccess_output_httpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
