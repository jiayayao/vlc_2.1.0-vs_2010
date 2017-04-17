// compressor.h : main header file for the compressor DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcompressorApp
// See compressor.cpp for the implementation of this class
//

class CcompressorApp : public CWinApp
{
public:
	CcompressorApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
