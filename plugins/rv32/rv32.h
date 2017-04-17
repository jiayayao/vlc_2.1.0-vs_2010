// rv32.h : main header file for the rv32 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Crv32App
// See rv32.cpp for the implementation of this class
//

class Crv32App : public CWinApp
{
public:
	Crv32App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
