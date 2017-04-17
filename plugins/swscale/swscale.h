// swscale.h : main header file for the swscale DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CswscaleApp
// See swscale.cpp for the implementation of this class
//

class CswscaleApp : public CWinApp
{
public:
	CswscaleApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
