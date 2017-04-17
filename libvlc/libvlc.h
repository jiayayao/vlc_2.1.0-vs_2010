// libvlc.h : main header file for the libvlc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClibvlcApp
// See libvlc.cpp for the implementation of this class
//

class ClibvlcApp : public CWinApp
{
public:
	ClibvlcApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
