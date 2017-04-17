// stream_out_smem.h : main header file for the stream_out_smem DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_smemApp
// See stream_out_smem.cpp for the implementation of this class
//

class Cstream_out_smemApp : public CWinApp
{
public:
	Cstream_out_smemApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
