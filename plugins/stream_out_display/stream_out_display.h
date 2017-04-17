// stream_out_display.h : main header file for the stream_out_display DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_displayApp
// See stream_out_display.cpp for the implementation of this class
//

class Cstream_out_displayApp : public CWinApp
{
public:
	Cstream_out_displayApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
