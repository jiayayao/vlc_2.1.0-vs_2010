// fluidsynth.h : main header file for the fluidsynth DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CfluidsynthApp
// See fluidsynth.cpp for the implementation of this class
//

class CfluidsynthApp : public CWinApp
{
public:
	CfluidsynthApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
