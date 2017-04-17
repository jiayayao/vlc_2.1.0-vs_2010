// avi.h : main header file for the avi DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CaviApp
// See avi.cpp for the implementation of this class
//

class CaviApp : public CWinApp
{
public:
	CaviApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
