// stream_out_standard.h : main header file for the stream_out_standard DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_standardApp
// See stream_out_standard.cpp for the implementation of this class
//

class Cstream_out_standardApp : public CWinApp
{
public:
	Cstream_out_standardApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
