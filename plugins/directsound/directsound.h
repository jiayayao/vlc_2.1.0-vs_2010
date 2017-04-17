// directsound.h : main header file for the directsound DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdirectsoundApp
// See directsound.cpp for the implementation of this class
//

class CdirectsoundApp : public CWinApp
{
public:
	CdirectsoundApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
