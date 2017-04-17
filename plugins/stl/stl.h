// stl.h : main header file for the stl DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CstlApp
// See stl.cpp for the implementation of this class
//

class CstlApp : public CWinApp
{
public:
	CstlApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
