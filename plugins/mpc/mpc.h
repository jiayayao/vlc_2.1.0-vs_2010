// mpc.h : main header file for the mpc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmpcApp
// See mpc.cpp for the implementation of this class
//

class CmpcApp : public CWinApp
{
public:
	CmpcApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
