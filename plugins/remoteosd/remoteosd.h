// remoteosd.h : main header file for the remoteosd DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CremoteosdApp
// See remoteosd.cpp for the implementation of this class
//

class CremoteosdApp : public CWinApp
{
public:
	CremoteosdApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
