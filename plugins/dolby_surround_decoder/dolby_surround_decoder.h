// dolby_surround_decoder.h : main header file for the dolby_surround_decoder DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdolby_surround_decoderApp
// See dolby_surround_decoder.cpp for the implementation of this class
//

class Cdolby_surround_decoderApp : public CWinApp
{
public:
	Cdolby_surround_decoderApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
