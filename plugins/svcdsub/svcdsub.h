// svcdsub.h : main header file for the svcdsub DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsvcdsubApp
// See svcdsub.cpp for the implementation of this class
//

class CsvcdsubApp : public CWinApp
{
public:
	CsvcdsubApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
