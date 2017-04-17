// logo.h : main header file for the logo DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClogoApp
// See logo.cpp for the implementation of this class
//

class ClogoApp : public CWinApp
{
public:
	ClogoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
