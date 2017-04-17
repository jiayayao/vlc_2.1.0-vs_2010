// yuvp.h : main header file for the yuvp DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CyuvpApp
// See yuvp.cpp for the implementation of this class
//

class CyuvpApp : public CWinApp
{
public:
	CyuvpApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
