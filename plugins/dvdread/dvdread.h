// dvdread.h : main header file for the dvdread DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdvdreadApp
// See dvdread.cpp for the implementation of this class
//

class CdvdreadApp : public CWinApp
{
public:
	CdvdreadApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
