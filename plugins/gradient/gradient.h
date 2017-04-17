// gradient.h : main header file for the gradient DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgradientApp
// See gradient.cpp for the implementation of this class
//

class CgradientApp : public CWinApp
{
public:
	CgradientApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
