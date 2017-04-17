// live555.h : main header file for the live555 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Clive555App
// See live555.cpp for the implementation of this class
//

class Clive555App : public CWinApp
{
public:
	Clive555App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
