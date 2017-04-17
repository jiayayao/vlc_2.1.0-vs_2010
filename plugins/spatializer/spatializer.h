// spatializer.h : main header file for the spatializer DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CspatializerApp
// See spatializer.cpp for the implementation of this class
//

class CspatializerApp : public CWinApp
{
public:
	CspatializerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
