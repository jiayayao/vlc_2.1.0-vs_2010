// stream_out_langfromtelx.h : main header file for the stream_out_langfromtelx DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_langfromtelxApp
// See stream_out_langfromtelx.cpp for the implementation of this class
//

class Cstream_out_langfromtelxApp : public CWinApp
{
public:
	Cstream_out_langfromtelxApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
