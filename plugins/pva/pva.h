// pva.h : main header file for the pva DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CpvaApp
// See pva.cpp for the implementation of this class
//

class CpvaApp : public CWinApp
{
public:
	CpvaApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
