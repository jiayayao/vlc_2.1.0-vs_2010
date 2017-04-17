// nuv.h : main header file for the nuv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CnuvApp
// See nuv.cpp for the implementation of this class
//

class CnuvApp : public CWinApp
{
public:
	CnuvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
