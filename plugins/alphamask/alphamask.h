// alphamask.h : main header file for the alphamask DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CalphamaskApp
// See alphamask.cpp for the implementation of this class
//

class CalphamaskApp : public CWinApp
{
public:
	CalphamaskApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
