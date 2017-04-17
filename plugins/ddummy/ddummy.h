// ddummy.h : main header file for the ddummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CddummyApp
// See ddummy.cpp for the implementation of this class
//

class CddummyApp : public CWinApp
{
public:
	CddummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
