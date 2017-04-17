// kate.h : main header file for the kate DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CkateApp
// See kate.cpp for the implementation of this class
//

class CkateApp : public CWinApp
{
public:
	CkateApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
