// netsync.h : main header file for the netsync DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CnetsyncApp
// See netsync.cpp for the implementation of this class
//

class CnetsyncApp : public CWinApp
{
public:
	CnetsyncApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
