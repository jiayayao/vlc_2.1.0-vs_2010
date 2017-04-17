// yuv.h : main header file for the yuv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CyuvApp
// See yuv.cpp for the implementation of this class
//

class CyuvApp : public CWinApp
{
public:
	CyuvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
