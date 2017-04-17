// packetizer_vc1.h : main header file for the packetizer_vc1 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_vc1App
// See packetizer_vc1.cpp for the implementation of this class
//

class Cpacketizer_vc1App : public CWinApp
{
public:
	Cpacketizer_vc1App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
