// colorthres.h : main header file for the colorthres DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcolorthresApp
// See colorthres.cpp for the implementation of this class
//

class CcolorthresApp : public CWinApp
{
public:
	CcolorthresApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
