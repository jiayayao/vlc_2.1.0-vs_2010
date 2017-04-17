// image.h : main header file for the image DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CimageApp
// See image.cpp for the implementation of this class
//

class CimageApp : public CWinApp
{
public:
	CimageApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
