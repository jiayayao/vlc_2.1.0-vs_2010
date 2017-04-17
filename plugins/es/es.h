// es.h : main header file for the es DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CesApp
// See es.cpp for the implementation of this class
//

class CesApp : public CWinApp
{
public:
	CesApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
