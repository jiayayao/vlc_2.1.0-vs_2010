// dvbsub.h : main header file for the dvbsub DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdvbsubApp
// See dvbsub.cpp for the implementation of this class
//

class CdvbsubApp : public CWinApp
{
public:
	CdvbsubApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
