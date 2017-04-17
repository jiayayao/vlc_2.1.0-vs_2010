// subsdec.h : main header file for the subsdec DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsubsdecApp
// See subsdec.cpp for the implementation of this class
//

class CsubsdecApp : public CWinApp
{
public:
	CsubsdecApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
