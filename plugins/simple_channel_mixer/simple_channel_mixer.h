// simple_channel_mixer.h : main header file for the simple_channel_mixer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Csimple_channel_mixerApp
// See simple_channel_mixer.cpp for the implementation of this class
//

class Csimple_channel_mixerApp : public CWinApp
{
public:
	Csimple_channel_mixerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
