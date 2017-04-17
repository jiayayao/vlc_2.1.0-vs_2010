// packetizer_copy.h : main header file for the packetizer_copy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_copyApp
// See packetizer_copy.cpp for the implementation of this class
//

class Cpacketizer_copyApp : public CWinApp
{
public:
	Cpacketizer_copyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
