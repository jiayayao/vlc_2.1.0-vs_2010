// speex.h : main header file for the speex DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CspeexApp
// See speex.cpp for the implementation of this class
//

class CspeexApp : public CWinApp
{
public:
	CspeexApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
