// audioscrobbler.h : main header file for the audioscrobbler DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CaudioscrobblerApp
// See audioscrobbler.cpp for the implementation of this class
//

class CaudioscrobblerApp : public CWinApp
{
public:
	CaudioscrobblerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
