// png.h : main header file for the png DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CpngApp
// See png.cpp for the implementation of this class
//

class CpngApp : public CWinApp
{
public:
	CpngApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
