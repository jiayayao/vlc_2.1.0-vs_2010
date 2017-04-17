// t140.h : main header file for the t140 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ct140App
// See t140.cpp for the implementation of this class
//

class Ct140App : public CWinApp
{
public:
	Ct140App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
