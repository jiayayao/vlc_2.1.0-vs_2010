// headphone_channel_mixer.h : main header file for the headphone_channel_mixer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cheadphone_channel_mixerApp
// See headphone_channel_mixer.cpp for the implementation of this class
//

class Cheadphone_channel_mixerApp : public CWinApp
{
public:
	Cheadphone_channel_mixerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
