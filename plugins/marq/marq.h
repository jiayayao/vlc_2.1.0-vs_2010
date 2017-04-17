// marq.h : main header file for the marq DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmarqApp
// See marq.cpp for the implementation of this class
//

class CmarqApp : public CWinApp
{
public:
	CmarqApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
