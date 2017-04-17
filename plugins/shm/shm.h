// shm.h : main header file for the shm DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CshmApp
// See shm.cpp for the implementation of this class
//

class CshmApp : public CWinApp
{
public:
	CshmApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
