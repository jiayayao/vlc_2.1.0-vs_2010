// aiff.h : main header file for the aiff DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CaiffApp
// See aiff.cpp for the implementation of this class
//

class CaiffApp : public CWinApp
{
public:
	CaiffApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
