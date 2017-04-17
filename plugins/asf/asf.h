// asf.h : main header file for the asf DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CasfApp
// See asf.cpp for the implementation of this class
//

class CasfApp : public CWinApp
{
public:
	CasfApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
