// wav.h : main header file for the wav DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CwavApp
// See wav.cpp for the implementation of this class
//

class CwavApp : public CWinApp
{
public:
	CwavApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
