// logger.h : main header file for the logger DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CloggerApp
// See logger.cpp for the implementation of this class
//

class CloggerApp : public CWinApp
{
public:
	CloggerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
