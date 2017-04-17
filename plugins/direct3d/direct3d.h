// direct3d.h : main header file for the direct3d DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdirect3dApp
// See direct3d.cpp for the implementation of this class
//

class Cdirect3dApp : public CWinApp
{
public:
	Cdirect3dApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
