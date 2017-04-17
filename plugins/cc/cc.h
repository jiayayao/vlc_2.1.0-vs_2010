// cc.h : main header file for the cc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CccApp
// See cc.cpp for the implementation of this class
//

class CccApp : public CWinApp
{
public:
	CccApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
