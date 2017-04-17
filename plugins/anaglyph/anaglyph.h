// anaglyph.h : main header file for the anaglyph DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CanaglyphApp
// See anaglyph.cpp for the implementation of this class
//

class CanaglyphApp : public CWinApp
{
public:
	CanaglyphApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
