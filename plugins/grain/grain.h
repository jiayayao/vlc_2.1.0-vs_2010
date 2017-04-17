// grain.h : main header file for the grain DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CgrainApp
// See grain.cpp for the implementation of this class
//

class CgrainApp : public CWinApp
{
public:
	CgrainApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
