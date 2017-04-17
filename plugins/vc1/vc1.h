// vc1.h : main header file for the vc1 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cvc1App
// See vc1.cpp for the implementation of this class
//

class Cvc1App : public CWinApp
{
public:
	Cvc1App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
