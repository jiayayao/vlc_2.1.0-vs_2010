// subsusf.h : main header file for the subsusf DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsubsusfApp
// See subsusf.cpp for the implementation of this class
//

class CsubsusfApp : public CWinApp
{
public:
	CsubsusfApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
