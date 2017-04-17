// sharpen.h : main header file for the sharpen DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsharpenApp
// See sharpen.cpp for the implementation of this class
//

class CsharpenApp : public CWinApp
{
public:
	CsharpenApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
