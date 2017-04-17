// xml.h : main header file for the xml DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CxmlApp
// See xml.cpp for the implementation of this class
//

class CxmlApp : public CWinApp
{
public:
	CxmlApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
