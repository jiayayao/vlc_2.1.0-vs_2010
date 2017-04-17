// zip.h : main header file for the zip DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CzipApp
// See zip.cpp for the implementation of this class
//

class CzipApp : public CWinApp
{
public:
	CzipApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
