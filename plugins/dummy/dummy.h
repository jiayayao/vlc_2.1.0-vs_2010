// dummy.h : main header file for the dummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdummyApp
// See dummy.cpp for the implementation of this class
//

class CdummyApp : public CWinApp
{
public:
	CdummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
