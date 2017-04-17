// stream_filter_rar.h : main header file for the stream_filter_rar DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_filter_rarApp
// See stream_filter_rar.cpp for the implementation of this class
//

class Cstream_filter_rarApp : public CWinApp
{
public:
	Cstream_filter_rarApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
