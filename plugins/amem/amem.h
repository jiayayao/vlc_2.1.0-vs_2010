// amem.h : main header file for the amem DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CamemApp
// See amem.cpp for the implementation of this class
//

class CamemApp : public CWinApp
{
public:
	CamemApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
