// dirac.h : main header file for the dirac DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdiracApp
// See dirac.cpp for the implementation of this class
//

class CdiracApp : public CWinApp
{
public:
	CdiracApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
