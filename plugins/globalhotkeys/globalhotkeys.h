// globalhotkeys.h : main header file for the globalhotkeys DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CglobalhotkeysApp
// See globalhotkeys.cpp for the implementation of this class
//

class CglobalhotkeysApp : public CWinApp
{
public:
	CglobalhotkeysApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
