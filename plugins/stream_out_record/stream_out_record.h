// stream_out_record.h : main header file for the stream_out_record DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_recordApp
// See stream_out_record.cpp for the implementation of this class
//

class Cstream_out_recordApp : public CWinApp
{
public:
	Cstream_out_recordApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
