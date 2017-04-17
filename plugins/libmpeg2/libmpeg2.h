// libmpeg2.h : main header file for the libmpeg2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Clibmpeg2App
// See libmpeg2.cpp for the implementation of this class
//

class Clibmpeg2App : public CWinApp
{
public:
	Clibmpeg2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
