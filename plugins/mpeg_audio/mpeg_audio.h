// mpeg_audio.h : main header file for the mpeg_audio DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmpeg_audioApp
// See mpeg_audio.cpp for the implementation of this class
//

class Cmpeg_audioApp : public CWinApp
{
public:
	Cmpeg_audioApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
