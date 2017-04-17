// access_udp.h : main header file for the access_udp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_udpApp
// See access_udp.cpp for the implementation of this class
//

class Caccess_udpApp : public CWinApp
{
public:
	Caccess_udpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
