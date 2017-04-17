// vod_rtsp.h : main header file for the vod_rtsp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cvod_rtspApp
// See vod_rtsp.cpp for the implementation of this class
//

class Cvod_rtspApp : public CWinApp
{
public:
	Cvod_rtspApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
