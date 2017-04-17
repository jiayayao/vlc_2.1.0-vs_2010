// wave.h : main header file for the wave DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CwaveApp
// See wave.cpp for the implementation of this class
//

class CwaveApp : public CWinApp
{
public:
	CwaveApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
