// stream_out_setid.h : main header file for the stream_out_setid DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_setidApp
// See stream_out_setid.cpp for the implementation of this class
//

class Cstream_out_setidApp : public CWinApp
{
public:
	Cstream_out_setidApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
