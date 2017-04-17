// dvdnav.h : main header file for the dvdnav DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdvdnavApp
// See dvdnav.cpp for the implementation of this class
//

class CdvdnavApp : public CWinApp
{
public:
	CdvdnavApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
