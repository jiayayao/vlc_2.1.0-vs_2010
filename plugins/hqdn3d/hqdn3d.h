// hqdn3d.h : main header file for the hqdn3d DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Chqdn3dApp
// See hqdn3d.cpp for the implementation of this class
//

class Chqdn3dApp : public CWinApp
{
public:
	Chqdn3dApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
