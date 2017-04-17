// sepia.h : main header file for the sepia DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsepiaApp
// See sepia.cpp for the implementation of this class
//

class CsepiaApp : public CWinApp
{
public:
	CsepiaApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
