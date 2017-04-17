// lua.h : main header file for the lua DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CluaApp
// See lua.cpp for the implementation of this class
//

class CluaApp : public CWinApp
{
public:
	CluaApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
