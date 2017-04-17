// scale.h : main header file for the scale DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CscaleApp
// See scale.cpp for the implementation of this class
//

class CscaleApp : public CWinApp
{
public:
	CscaleApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
