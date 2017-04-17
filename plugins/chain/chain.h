// chain.h : main header file for the chain DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CchainApp
// See chain.cpp for the implementation of this class
//

class CchainApp : public CWinApp
{
public:
	CchainApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
