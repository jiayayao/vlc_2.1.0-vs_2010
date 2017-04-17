// export.h : main header file for the export DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CexportApp
// See export.cpp for the implementation of this class
//

class CexportApp : public CWinApp
{
public:
	CexportApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
