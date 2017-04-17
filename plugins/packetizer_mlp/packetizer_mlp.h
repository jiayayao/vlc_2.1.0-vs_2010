// packetizer_mlp.h : main header file for the packetizer_mlp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_mlpApp
// See packetizer_mlp.cpp for the implementation of this class
//

class Cpacketizer_mlpApp : public CWinApp
{
public:
	Cpacketizer_mlpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
