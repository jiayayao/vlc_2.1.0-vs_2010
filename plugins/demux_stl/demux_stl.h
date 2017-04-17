// demux_stl.h : main header file for the demux_stl DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cdemux_stlApp
// See demux_stl.cpp for the implementation of this class
//

class Cdemux_stlApp : public CWinApp
{
public:
	Cdemux_stlApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
