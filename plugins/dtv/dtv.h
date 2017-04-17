// dtv.h : main header file for the dtv DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CdtvApp
// See dtv.cpp for the implementation of this class
//

class CdtvApp : public CWinApp
{
public:
	CdtvApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
