// gaussianblur.h : main header file for the gaussianblur DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgaussianblurApp
// See gaussianblur.cpp for the implementation of this class
//

class CgaussianblurApp : public CWinApp
{
public:
	CgaussianblurApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
