// stream_out_transcode.h : main header file for the stream_out_transcode DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_transcodeApp
// See stream_out_transcode.cpp for the implementation of this class
//

class Cstream_out_transcodeApp : public CWinApp
{
public:
	Cstream_out_transcodeApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
