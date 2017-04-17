// vdummy.h : main header file for the vdummy DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvdummyApp
// See vdummy.cpp for the implementation of this class
//

class CvdummyApp : public CWinApp
{
public:
	CvdummyApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
