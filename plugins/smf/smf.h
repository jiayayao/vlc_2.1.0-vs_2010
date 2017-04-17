// smf.h : main header file for the smf DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsmfApp
// See smf.cpp for the implementation of this class
//

class CsmfApp : public CWinApp
{
public:
	CsmfApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
