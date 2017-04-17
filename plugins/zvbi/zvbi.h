// zvbi.h : main header file for the zvbi DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CzvbiApp
// See zvbi.cpp for the implementation of this class
//

class CzvbiApp : public CWinApp
{
public:
	CzvbiApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
