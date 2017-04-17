// idummy.h : main header file for the idummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CidummyApp
// See idummy.cpp for the implementation of this class
//

class CidummyApp : public CWinApp
{
public:
	CidummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
