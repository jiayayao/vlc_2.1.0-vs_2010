// panoramix.h : main header file for the panoramix DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CpanoramixApp
// See panoramix.cpp for the implementation of this class
//

class CpanoramixApp : public CWinApp
{
public:
	CpanoramixApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
