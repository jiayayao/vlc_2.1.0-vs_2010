// mono.h : main header file for the mono DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmonoApp
// See mono.cpp for the implementation of this class
//

class CmonoApp : public CWinApp
{
public:
	CmonoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
