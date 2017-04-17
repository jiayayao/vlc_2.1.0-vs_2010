// trivial_channel_mixer.h : main header file for the trivial_channel_mixer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ctrivial_channel_mixerApp
// See trivial_channel_mixer.cpp for the implementation of this class
//

class Ctrivial_channel_mixerApp : public CWinApp
{
public:
	Ctrivial_channel_mixerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
