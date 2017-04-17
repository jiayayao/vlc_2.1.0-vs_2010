// packetizer_mpeg4video.h : main header file for the packetizer_mpeg4video DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_mpeg4videoApp
// See packetizer_mpeg4video.cpp for the implementation of this class
//

class Cpacketizer_mpeg4videoApp : public CWinApp
{
public:
	Cpacketizer_mpeg4videoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
