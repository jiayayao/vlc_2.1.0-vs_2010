// ugly_resampler.h : main header file for the ugly_resampler DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cugly_resamplerApp
// See ugly_resampler.cpp for the implementation of this class
//

class Cugly_resamplerApp : public CWinApp
{
public:
	Cugly_resamplerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
