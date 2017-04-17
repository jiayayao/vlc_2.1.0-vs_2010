// stream_out_rtp.h : main header file for the stream_out_rtp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_rtpApp
// See stream_out_rtp.cpp for the implementation of this class
//

class Cstream_out_rtpApp : public CWinApp
{
public:
	Cstream_out_rtpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
