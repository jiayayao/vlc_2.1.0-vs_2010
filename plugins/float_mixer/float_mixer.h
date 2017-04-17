// float_mixer.h : main header file for the float_mixer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cfloat_mixerApp
// See float_mixer.cpp for the implementation of this class
//

class Cfloat_mixerApp : public CWinApp
{
public:
	Cfloat_mixerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
