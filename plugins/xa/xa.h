// xa.h : main header file for the xa DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CxaApp
// See xa.cpp for the implementation of this class
//

class CxaApp : public CWinApp
{
public:
	CxaApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
