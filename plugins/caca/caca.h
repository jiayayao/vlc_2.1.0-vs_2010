// caca.h : main header file for the caca DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcacaApp
// See caca.cpp for the implementation of this class
//

class CcacaApp : public CWinApp
{
public:
	CcacaApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
