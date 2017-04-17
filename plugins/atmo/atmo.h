// atmo.h : main header file for the atmo DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CatmoApp
// See atmo.cpp for the implementation of this class
//

class CatmoApp : public CWinApp
{
public:
	CatmoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
