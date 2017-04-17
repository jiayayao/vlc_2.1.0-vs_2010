// oldrc.h : main header file for the oldrc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ColdrcApp
// See oldrc.cpp for the implementation of this class
//

class ColdrcApp : public CWinApp
{
public:
	ColdrcApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
