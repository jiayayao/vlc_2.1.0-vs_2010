// mirror.h : main header file for the mirror DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmirrorApp
// See mirror.cpp for the implementation of this class
//

class CmirrorApp : public CWinApp
{
public:
	CmirrorApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
