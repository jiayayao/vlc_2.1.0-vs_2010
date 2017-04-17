// subtitle.h : main header file for the subtitle DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsubtitleApp
// See subtitle.cpp for the implementation of this class
//

class CsubtitleApp : public CWinApp
{
public:
	CsubtitleApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
