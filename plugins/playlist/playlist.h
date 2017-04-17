// playlist.h : main header file for the playlist DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CplaylistApp
// See playlist.cpp for the implementation of this class
//

class CplaylistApp : public CWinApp
{
public:
	CplaylistApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
