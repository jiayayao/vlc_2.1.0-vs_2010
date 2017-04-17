// a52tospdif.h : main header file for the a52tospdif DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ca52tospdifApp
// See a52tospdif.cpp for the implementation of this class
//

class Ca52tospdifApp : public CWinApp
{
public:
	Ca52tospdifApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
