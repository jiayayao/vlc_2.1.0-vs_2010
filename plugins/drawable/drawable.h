// drawable.h : main header file for the drawable DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdrawableApp
// See drawable.cpp for the implementation of this class
//

class CdrawableApp : public CWinApp
{
public:
	CdrawableApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
