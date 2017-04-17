// scene.h : main header file for the scene DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CsceneApp
// See scene.cpp for the implementation of this class
//

class CsceneApp : public CWinApp
{
public:
	CsceneApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
