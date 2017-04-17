// hotkeys.h : main header file for the hotkeys DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ChotkeysApp
// See hotkeys.cpp for the implementation of this class
//

class ChotkeysApp : public CWinApp
{
public:
	ChotkeysApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
