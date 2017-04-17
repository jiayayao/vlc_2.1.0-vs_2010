// g711.h : main header file for the g711 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cg711App
// See g711.cpp for the implementation of this class
//

class Cg711App : public CWinApp
{
public:
	Cg711App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
