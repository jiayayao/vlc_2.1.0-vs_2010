// extract.h : main header file for the extract DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CextractApp
// See extract.cpp for the implementation of this class
//

class CextractApp : public CWinApp
{
public:
	CextractApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
