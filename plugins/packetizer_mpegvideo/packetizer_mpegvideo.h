// packetizer_mpegvideo.h : main header file for the packetizer_mpegvideo DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_mpegvideoApp
// See packetizer_mpegvideo.cpp for the implementation of this class
//

class Cpacketizer_mpegvideoApp : public CWinApp
{
public:
	Cpacketizer_mpegvideoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
