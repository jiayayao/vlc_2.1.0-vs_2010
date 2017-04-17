// stream_out_es.h : main header file for the stream_out_es DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_esApp
// See stream_out_es.cpp for the implementation of this class
//

class Cstream_out_esApp : public CWinApp
{
public:
	Cstream_out_esApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
