// timecode.h : main header file for the timecode DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtimecodeApp
// See timecode.cpp for the implementation of this class
//

class CtimecodeApp : public CWinApp
{
public:
	CtimecodeApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
