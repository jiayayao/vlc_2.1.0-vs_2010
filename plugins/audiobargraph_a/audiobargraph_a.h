// audiobargraph_a.h : main header file for the audiobargraph_a DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caudiobargraph_aApp
// See audiobargraph_a.cpp for the implementation of this class
//

class Caudiobargraph_aApp : public CWinApp
{
public:
	Caudiobargraph_aApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
