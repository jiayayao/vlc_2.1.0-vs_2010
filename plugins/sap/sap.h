// sap.h : main header file for the sap DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsapApp
// See sap.cpp for the implementation of this class
//

class CsapApp : public CWinApp
{
public:
	CsapApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
