// grain_v.h : main header file for the grain_v DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cgrain_vApp
// See grain_v.cpp for the implementation of this class
//

class Cgrain_vApp : public CWinApp
{
public:
	Cgrain_vApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
