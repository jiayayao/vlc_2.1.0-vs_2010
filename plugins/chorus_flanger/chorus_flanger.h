// chorus_flanger.h : main header file for the chorus_flanger DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cchorus_flangerApp
// See chorus_flanger.cpp for the implementation of this class
//

class Cchorus_flangerApp : public CWinApp
{
public:
	Cchorus_flangerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
