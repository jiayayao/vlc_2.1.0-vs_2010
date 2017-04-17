// mediadirs.h : main header file for the mediadirs DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmediadirsApp
// See mediadirs.cpp for the implementation of this class
//

class CmediadirsApp : public CWinApp
{
public:
	CmediadirsApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
