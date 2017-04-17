// demux_cdg.h : main header file for the demux_cdg DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdemux_cdgApp
// See demux_cdg.cpp for the implementation of this class
//

class Cdemux_cdgApp : public CWinApp
{
public:
	Cdemux_cdgApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
