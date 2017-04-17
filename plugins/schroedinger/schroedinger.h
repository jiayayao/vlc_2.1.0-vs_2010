// schroedinger.h : main header file for the schroedinger DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CschroedingerApp
// See schroedinger.cpp for the implementation of this class
//

class CschroedingerApp : public CWinApp
{
public:
	CschroedingerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
