// vorbis.h : main header file for the vorbis DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvorbisApp
// See vorbis.cpp for the implementation of this class
//

class CvorbisApp : public CWinApp
{
public:
	CvorbisApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
