// deinterlace.h : main header file for the deinterlace DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdeinterlaceApp
// See deinterlace.cpp for the implementation of this class
//

class CdeinterlaceApp : public CWinApp
{
public:
	CdeinterlaceApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
