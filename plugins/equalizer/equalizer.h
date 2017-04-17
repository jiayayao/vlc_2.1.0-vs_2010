// equalizer.h : main header file for the equalizer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CequalizerApp
// See equalizer.cpp for the implementation of this class
//

class CequalizerApp : public CWinApp
{
public:
	CequalizerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
