// rotate.h : main header file for the rotate DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrotateApp
// See rotate.cpp for the implementation of this class
//

class CrotateApp : public CWinApp
{
public:
	CrotateApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
