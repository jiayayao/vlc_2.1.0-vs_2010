// grey_yuv.h : main header file for the grey_yuv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cgrey_yuvApp
// See grey_yuv.cpp for the implementation of this class
//

class Cgrey_yuvApp : public CWinApp
{
public:
	Cgrey_yuvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
