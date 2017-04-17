// access_rar.h : main header file for the access_rar DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_rarApp
// See access_rar.cpp for the implementation of this class
//

class Caccess_rarApp : public CWinApp
{
public:
	Caccess_rarApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
