// ty.h : main header file for the ty DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtyApp
// See ty.cpp for the implementation of this class
//

class CtyApp : public CWinApp
{
public:
	CtyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
