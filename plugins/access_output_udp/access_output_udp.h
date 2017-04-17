// access_output_udp.h : main header file for the access_output_udp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_output_udpApp
// See access_output_udp.cpp for the implementation of this class
//

class Caccess_output_udpApp : public CWinApp
{
public:
	Caccess_output_udpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
