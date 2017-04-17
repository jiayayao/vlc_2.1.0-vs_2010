// psychedelic.h : main header file for the psychedelic DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CpsychedelicApp
// See psychedelic.cpp for the implementation of this class
//

class CpsychedelicApp : public CWinApp
{
public:
	CpsychedelicApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
