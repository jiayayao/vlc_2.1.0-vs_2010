// bandlimited_resampler.h : main header file for the bandlimited_resampler DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cbandlimited_resamplerApp
// See bandlimited_resampler.cpp for the implementation of this class
//

class Cbandlimited_resamplerApp : public CWinApp
{
public:
	Cbandlimited_resamplerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
