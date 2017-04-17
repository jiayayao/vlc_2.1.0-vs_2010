// adummy.h : main header file for the adummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CadummyApp
// See adummy.cpp for the implementation of this class
//

class CadummyApp : public CWinApp
{
public:
	CadummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
