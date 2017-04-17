// clone.h : main header file for the clone DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcloneApp
// See clone.cpp for the implementation of this class
//

class CcloneApp : public CWinApp
{
public:
	CcloneApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
