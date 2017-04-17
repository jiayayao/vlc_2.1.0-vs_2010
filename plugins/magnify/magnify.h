// magnify.h : main header file for the magnify DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmagnifyApp
// See magnify.cpp for the implementation of this class
//

class CmagnifyApp : public CWinApp
{
public:
	CmagnifyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
