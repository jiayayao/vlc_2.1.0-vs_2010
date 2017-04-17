// stream_out_dummy.h : main header file for the stream_out_dummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_dummyApp
// See stream_out_dummy.cpp for the implementation of this class
//

class Cstream_out_dummyApp : public CWinApp
{
public:
	Cstream_out_dummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
