// mosaic.h : main header file for the mosaic DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmosaicApp
// See mosaic.cpp for the implementation of this class
//

class CmosaicApp : public CWinApp
{
public:
	CmosaicApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
