// rtp.h : main header file for the rtp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrtpApp
// See rtp.cpp for the implementation of this class
//

class CrtpApp : public CWinApp
{
public:
	CrtpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
