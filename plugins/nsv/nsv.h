// nsv.h : main header file for the nsv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CnsvApp
// See nsv.cpp for the implementation of this class
//

class CnsvApp : public CWinApp
{
public:
	CnsvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
