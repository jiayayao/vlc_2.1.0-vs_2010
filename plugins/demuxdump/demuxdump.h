// demuxdump.h : main header file for the demuxdump DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdemuxdumpApp
// See demuxdump.cpp for the implementation of this class
//

class CdemuxdumpApp : public CWinApp
{
public:
	CdemuxdumpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
