// crystalhd.h : main header file for the crystalhd DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CcrystalhdApp
// See crystalhd.cpp for the implementation of this class
//

class CcrystalhdApp : public CWinApp
{
public:
	CcrystalhdApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
