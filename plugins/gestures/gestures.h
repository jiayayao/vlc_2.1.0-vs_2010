// gestures.h : main header file for the gestures DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgesturesApp
// See gestures.cpp for the implementation of this class
//

class CgesturesApp : public CWinApp
{
public:
	CgesturesApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
