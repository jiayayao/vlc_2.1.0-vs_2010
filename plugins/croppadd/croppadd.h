// croppadd.h : main header file for the croppadd DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcroppaddApp
// See croppadd.cpp for the implementation of this class
//

class CcroppaddApp : public CWinApp
{
public:
	CcroppaddApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
