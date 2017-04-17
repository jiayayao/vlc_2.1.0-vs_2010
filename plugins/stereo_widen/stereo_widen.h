// stereo_widen.h : main header file for the stereo_widen DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstereo_widenApp
// See stereo_widen.cpp for the implementation of this class
//

class Cstereo_widenApp : public CWinApp
{
public:
	Cstereo_widenApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
