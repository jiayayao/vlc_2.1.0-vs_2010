// libcompat.h : main header file for the libcompat DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClibcompatApp
// See libcompat.cpp for the implementation of this class
//

class ClibcompatApp : public CWinApp
{
public:
	ClibcompatApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
