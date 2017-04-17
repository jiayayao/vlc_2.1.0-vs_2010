// dxva2.h : main header file for the dxva2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdxva2App
// See dxva2.cpp for the implementation of this class
//

class Cdxva2App : public CWinApp
{
public:
	Cdxva2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
