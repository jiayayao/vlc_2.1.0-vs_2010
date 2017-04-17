// packetizer_mpeg4audio.h : main header file for the packetizer_mpeg4audio DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_mpeg4audioApp
// See packetizer_mpeg4audio.cpp for the implementation of this class
//

class Cpacketizer_mpeg4audioApp : public CWinApp
{
public:
	Cpacketizer_mpeg4audioApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
