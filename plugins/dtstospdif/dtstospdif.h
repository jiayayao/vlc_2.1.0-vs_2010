// dtstospdif.h : main header file for the dtstospdif DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdtstospdifApp
// See dtstospdif.cpp for the implementation of this class
//

class CdtstospdifApp : public CWinApp
{
public:
	CdtstospdifApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
