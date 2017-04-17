// access_mms.h : main header file for the access_mms DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_mmsApp
// See access_mms.cpp for the implementation of this class
//

class Caccess_mmsApp : public CWinApp
{
public:
	Caccess_mmsApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
