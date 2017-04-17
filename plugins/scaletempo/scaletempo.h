// scaletempo.h : main header file for the scaletempo DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CscaletempoApp
// See scaletempo.cpp for the implementation of this class
//

class CscaletempoApp : public CWinApp
{
public:
	CscaletempoApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
