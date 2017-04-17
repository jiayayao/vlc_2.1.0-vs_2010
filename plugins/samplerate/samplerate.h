// samplerate.h : main header file for the samplerate DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsamplerateApp
// See samplerate.cpp for the implementation of this class
//

class CsamplerateApp : public CWinApp
{
public:
	CsamplerateApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
