// access_vdr.h : main header file for the access_vdr DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_vdrApp
// See access_vdr.cpp for the implementation of this class
//

class Caccess_vdrApp : public CWinApp
{
public:
	Caccess_vdrApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
