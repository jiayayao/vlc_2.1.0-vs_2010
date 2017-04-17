// rawdv.h : main header file for the rawdv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrawdvApp
// See rawdv.cpp for the implementation of this class
//

class CrawdvApp : public CWinApp
{
public:
	CrawdvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
