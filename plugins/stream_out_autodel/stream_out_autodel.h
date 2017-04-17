// stream_out_autodel.h : main header file for the stream_out_autodel DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_autodelApp
// See stream_out_autodel.cpp for the implementation of this class
//

class Cstream_out_autodelApp : public CWinApp
{
public:
	Cstream_out_autodelApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
