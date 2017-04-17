// libvlccore.h : main header file for the libvlccore DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClibvlccoreApp
// See libvlccore.cpp for the implementation of this class
//

class ClibvlccoreApp : public CWinApp
{
public:
	ClibvlccoreApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
