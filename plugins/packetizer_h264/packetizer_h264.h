// packetizer_h264.h : main header file for the packetizer_h264 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_h264App
// See packetizer_h264.cpp for the implementation of this class
//

class Cpacketizer_h264App : public CWinApp
{
public:
	Cpacketizer_h264App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
