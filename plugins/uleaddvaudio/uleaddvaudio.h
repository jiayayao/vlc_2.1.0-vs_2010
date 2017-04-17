// uleaddvaudio.h : main header file for the uleaddvaudio DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CuleaddvaudioApp
// See uleaddvaudio.cpp for the implementation of this class
//

class CuleaddvaudioApp : public CWinApp
{
public:
	CuleaddvaudioApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
