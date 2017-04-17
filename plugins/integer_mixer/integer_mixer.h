// integer_mixer.h : main header file for the integer_mixer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cinteger_mixerApp
// See integer_mixer.cpp for the implementation of this class
//

class Cinteger_mixerApp : public CWinApp
{
public:
	Cinteger_mixerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
