// packetizer_flac.h : main header file for the packetizer_flac DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_flacApp
// See packetizer_flac.cpp for the implementation of this class
//

class Cpacketizer_flacApp : public CWinApp
{
public:
	Cpacketizer_flacApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
