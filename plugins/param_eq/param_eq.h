// param_eq.h : main header file for the param_eq DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cparam_eqApp
// See param_eq.cpp for the implementation of this class
//

class Cparam_eqApp : public CWinApp
{
public:
	Cparam_eqApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
