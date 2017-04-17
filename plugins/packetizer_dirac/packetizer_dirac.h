// packetizer_dirac.h : main header file for the packetizer_dirac DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpacketizer_diracApp
// See packetizer_dirac.cpp for the implementation of this class
//

class Cpacketizer_diracApp : public CWinApp
{
public:
	Cpacketizer_diracApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
