// libass.h : main header file for the libass DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClibassApp
// See libass.cpp for the implementation of this class
//

class ClibassApp : public CWinApp
{
public:
	ClibassApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
