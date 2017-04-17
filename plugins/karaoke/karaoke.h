// karaoke.h : main header file for the karaoke DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CkaraokeApp
// See karaoke.cpp for the implementation of this class
//

class CkaraokeApp : public CWinApp
{
public:
	CkaraokeApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
