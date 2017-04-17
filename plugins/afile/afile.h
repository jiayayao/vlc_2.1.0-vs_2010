// afile.h : main header file for the afile DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CafileApp
// See afile.cpp for the implementation of this class
//

class CafileApp : public CWinApp
{
public:
	CafileApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
