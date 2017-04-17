// faad.h : main header file for the faad DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CfaadApp
// See faad.cpp for the implementation of this class
//

class CfaadApp : public CWinApp
{
public:
	CfaadApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
