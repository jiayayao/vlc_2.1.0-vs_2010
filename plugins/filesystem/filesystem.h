// filesystem.h : main header file for the filesystem DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CfilesystemApp
// See filesystem.cpp for the implementation of this class
//

class CfilesystemApp : public CWinApp
{
public:
	CfilesystemApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
