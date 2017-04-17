// qt4.h : main header file for the qt4 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cqt4App
// See qt4.cpp for the implementation of this class
//

class Cqt4App : public CWinApp
{
public:
	Cqt4App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
