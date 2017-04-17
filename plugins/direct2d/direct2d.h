// direct2d.h : main header file for the direct2d DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdirect2dApp
// See direct2d.cpp for the implementation of this class
//

class Cdirect2dApp : public CWinApp
{
public:
	Cdirect2dApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
