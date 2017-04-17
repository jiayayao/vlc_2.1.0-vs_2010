// normvol.h : main header file for the normvol DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CnormvolApp
// See normvol.cpp for the implementation of this class
//

class CnormvolApp : public CWinApp
{
public:
	CnormvolApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
