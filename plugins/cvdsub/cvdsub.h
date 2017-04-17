// cvdsub.h : main header file for the cvdsub DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcvdsubApp
// See cvdsub.cpp for the implementation of this class
//

class CcvdsubApp : public CWinApp
{
public:
	CcvdsubApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
