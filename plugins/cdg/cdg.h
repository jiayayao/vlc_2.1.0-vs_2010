// cdg.h : main header file for the cdg DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcdgApp
// See cdg.cpp for the implementation of this class
//

class CcdgApp : public CWinApp
{
public:
	CcdgApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
