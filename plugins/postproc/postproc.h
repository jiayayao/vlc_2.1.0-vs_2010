// postproc.h : main header file for the postproc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CpostprocApp
// See postproc.cpp for the implementation of this class
//

class CpostprocApp : public CWinApp
{
public:
	CpostprocApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
