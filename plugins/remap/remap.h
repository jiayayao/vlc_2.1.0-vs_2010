// remap.h : main header file for the remap DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CremapApp
// See remap.cpp for the implementation of this class
//

class CremapApp : public CWinApp
{
public:
	CremapApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
