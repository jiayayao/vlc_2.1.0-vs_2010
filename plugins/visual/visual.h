// visual.h : main header file for the visual DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvisualApp
// See visual.cpp for the implementation of this class
//

class CvisualApp : public CWinApp
{
public:
	CvisualApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
