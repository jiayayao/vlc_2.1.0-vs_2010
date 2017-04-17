// access_realrtsp.h : main header file for the access_realrtsp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_realrtspApp
// See access_realrtsp.cpp for the implementation of this class
//

class Caccess_realrtspApp : public CWinApp
{
public:
	Caccess_realrtspApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
