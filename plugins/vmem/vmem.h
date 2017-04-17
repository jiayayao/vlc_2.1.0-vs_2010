// vmem.h : main header file for the vmem DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvmemApp
// See vmem.cpp for the implementation of this class
//

class CvmemApp : public CWinApp
{
public:
	CvmemApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
