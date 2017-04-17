// theora.h : main header file for the theora DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtheoraApp
// See theora.cpp for the implementation of this class
//

class CtheoraApp : public CWinApp
{
public:
	CtheoraApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
