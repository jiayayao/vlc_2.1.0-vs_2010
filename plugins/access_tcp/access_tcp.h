// access_tcp.h : main header file for the access_tcp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_tcpApp
// See access_tcp.cpp for the implementation of this class
//

class Caccess_tcpApp : public CWinApp
{
public:
	Caccess_tcpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
