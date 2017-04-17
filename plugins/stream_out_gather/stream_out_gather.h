// stream_out_gather.h : main header file for the stream_out_gather DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_gatherApp
// See stream_out_gather.cpp for the implementation of this class
//

class Cstream_out_gatherApp : public CWinApp
{
public:
	Cstream_out_gatherApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
