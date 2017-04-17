// ts.h : main header file for the ts DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtsApp
// See ts.cpp for the implementation of this class
//

class CtsApp : public CWinApp
{
public:
	CtsApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
