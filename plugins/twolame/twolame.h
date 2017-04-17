// twolame.h : main header file for the twolame DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtwolameApp
// See twolame.cpp for the implementation of this class
//

class CtwolameApp : public CWinApp
{
public:
	CtwolameApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
