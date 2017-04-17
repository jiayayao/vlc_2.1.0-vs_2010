// erase.h : main header file for the erase DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CeraseApp
// See erase.cpp for the implementation of this class
//

class CeraseApp : public CWinApp
{
public:
	CeraseApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
