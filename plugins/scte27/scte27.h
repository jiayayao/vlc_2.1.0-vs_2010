// scte27.h : main header file for the scte27 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cscte27App
// See scte27.cpp for the implementation of this class
//

class Cscte27App : public CWinApp
{
public:
	Cscte27App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
