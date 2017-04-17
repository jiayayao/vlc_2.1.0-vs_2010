// gradfun.h : main header file for the gradfun DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgradfunApp
// See gradfun.cpp for the implementation of this class
//

class CgradfunApp : public CWinApp
{
public:
	CgradfunApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
