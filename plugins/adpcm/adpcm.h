// adpcm.h : main header file for the adpcm DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CadpcmApp
// See adpcm.cpp for the implementation of this class
//

class CadpcmApp : public CWinApp
{
public:
	CadpcmApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
