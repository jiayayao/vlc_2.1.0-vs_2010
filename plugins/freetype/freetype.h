// freetype.h : main header file for the freetype DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CfreetypeApp
// See freetype.cpp for the implementation of this class
//

class CfreetypeApp : public CWinApp
{
public:
	CfreetypeApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
