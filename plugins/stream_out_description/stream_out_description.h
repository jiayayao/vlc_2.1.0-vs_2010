// stream_out_description.h : main header file for the stream_out_description DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_descriptionApp
// See stream_out_description.cpp for the implementation of this class
//

class Cstream_out_descriptionApp : public CWinApp
{
public:
	Cstream_out_descriptionApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
