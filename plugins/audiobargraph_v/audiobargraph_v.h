// audiobargraph_v.h : main header file for the audiobargraph_v DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caudiobargraph_vApp
// See audiobargraph_v.cpp for the implementation of this class
//

class Caudiobargraph_vApp : public CWinApp
{
public:
	Caudiobargraph_vApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
