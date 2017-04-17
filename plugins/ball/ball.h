// ball.h : main header file for the ball DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CballApp
// See ball.cpp for the implementation of this class
//

class CballApp : public CWinApp
{
public:
	CballApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
