// skins2.h : main header file for the skins2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cskins2App
// See skins2.cpp for the implementation of this class
//

class Cskins2App : public CWinApp
{
public:
	Cskins2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
