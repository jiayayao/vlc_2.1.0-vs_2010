// canvas.h : main header file for the canvas DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcanvasApp
// See canvas.cpp for the implementation of this class
//

class CcanvasApp : public CWinApp
{
public:
	CcanvasApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
