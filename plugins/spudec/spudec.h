// spudec.h : main header file for the spudec DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CspudecApp
// See spudec.cpp for the implementation of this class
//

class CspudecApp : public CWinApp
{
public:
	CspudecApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
