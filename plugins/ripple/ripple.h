// ripple.h : main header file for the ripple DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrippleApp
// See ripple.cpp for the implementation of this class
//

class CrippleApp : public CWinApp
{
public:
	CrippleApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
