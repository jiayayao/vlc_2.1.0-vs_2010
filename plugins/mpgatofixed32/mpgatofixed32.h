// mpgatofixed32.h : main header file for the mpgatofixed32 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmpgatofixed32App
// See mpgatofixed32.cpp for the implementation of this class
//

class Cmpgatofixed32App : public CWinApp
{
public:
	Cmpgatofixed32App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
