// ntservice.h : main header file for the ntservice DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CntserviceApp
// See ntservice.cpp for the implementation of this class
//

class CntserviceApp : public CWinApp
{
public:
	CntserviceApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
