// access_ftp.h : main header file for the access_ftp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_ftpApp
// See access_ftp.cpp for the implementation of this class
//

class Caccess_ftpApp : public CWinApp
{
public:
	Caccess_ftpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
