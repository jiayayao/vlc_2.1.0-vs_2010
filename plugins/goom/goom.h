// goom.h : main header file for the goom DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgoomApp
// See goom.cpp for the implementation of this class
//

class CgoomApp : public CWinApp
{
public:
	CgoomApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
