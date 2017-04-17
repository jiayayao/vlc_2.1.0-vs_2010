// blendbench.h : main header file for the blendbench DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CblendbenchApp
// See blendbench.cpp for the implementation of this class
//

class CblendbenchApp : public CWinApp
{
public:
	CblendbenchApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
