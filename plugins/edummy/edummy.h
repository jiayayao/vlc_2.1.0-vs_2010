// edummy.h : main header file for the edummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CedummyApp
// See edummy.cpp for the implementation of this class
//

class CedummyApp : public CWinApp
{
public:
	CedummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
