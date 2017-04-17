// access_bd.h : main header file for the access_bd DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_bdApp
// See access_bd.cpp for the implementation of this class
//

class Caccess_bdApp : public CWinApp
{
public:
	Caccess_bdApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
