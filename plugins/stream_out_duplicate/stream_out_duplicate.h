// stream_out_duplicate.h : main header file for the stream_out_duplicate DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_duplicateApp
// See stream_out_duplicate.cpp for the implementation of this class
//

class Cstream_out_duplicateApp : public CWinApp
{
public:
	Cstream_out_duplicateApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
