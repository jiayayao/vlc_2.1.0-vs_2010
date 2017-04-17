// nsc.h : main header file for the nsc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CnscApp
// See nsc.cpp for the implementation of this class
//

class CnscApp : public CWinApp
{
public:
	CnscApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
