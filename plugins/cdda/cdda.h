// cdda.h : main header file for the cdda DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcddaApp
// See cdda.cpp for the implementation of this class
//

class CcddaApp : public CWinApp
{
public:
	CcddaApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
