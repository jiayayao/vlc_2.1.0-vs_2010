// upnp.h : main header file for the upnp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CupnpApp
// See upnp.cpp for the implementation of this class
//

class CupnpApp : public CWinApp
{
public:
	CupnpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
