// stream_out_raop.h : main header file for the stream_out_raop DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_raopApp
// See stream_out_raop.cpp for the implementation of this class
//

class Cstream_out_raopApp : public CWinApp
{
public:
	Cstream_out_raopApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
