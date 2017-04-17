// blend.h : main header file for the blend DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CblendApp
// See blend.cpp for the implementation of this class
//

class CblendApp : public CWinApp
{
public:
	CblendApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
