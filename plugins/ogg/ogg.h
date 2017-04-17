// ogg.h : main header file for the ogg DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CoggApp
// See ogg.cpp for the implementation of this class
//

class CoggApp : public CWinApp
{
public:
	CoggApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
