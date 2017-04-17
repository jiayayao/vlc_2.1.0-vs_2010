// record.h : main header file for the record DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CrecordApp
// See record.cpp for the implementation of this class
//

class CrecordApp : public CWinApp
{
public:
	CrecordApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
