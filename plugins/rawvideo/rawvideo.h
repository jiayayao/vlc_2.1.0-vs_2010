// rawvideo.h : main header file for the rawvideo DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrawvideoApp
// See rawvideo.cpp for the implementation of this class
//

class CrawvideoApp : public CWinApp
{
public:
	CrawvideoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
