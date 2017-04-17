// speex_resampler.h : main header file for the speex_resampler DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cspeex_resamplerApp
// See speex_resampler.cpp for the implementation of this class
//

class Cspeex_resamplerApp : public CWinApp
{
public:
	Cspeex_resamplerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
