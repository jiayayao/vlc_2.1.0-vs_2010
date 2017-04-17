// audio_format.h : main header file for the audio_format DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caudio_formatApp
// See audio_format.cpp for the implementation of this class
//

class Caudio_formatApp : public CWinApp
{
public:
	Caudio_formatApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
