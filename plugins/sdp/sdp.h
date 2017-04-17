// sdp.h : main header file for the sdp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsdpApp
// See sdp.cpp for the implementation of this class
//

class CsdpApp : public CWinApp
{
public:
	CsdpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
