// dmo.h : main header file for the dmo DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdmoApp
// See dmo.cpp for the implementation of this class
//

class CdmoApp : public CWinApp
{
public:
	CdmoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
