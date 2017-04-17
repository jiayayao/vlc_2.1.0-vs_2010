// transform.h : main header file for the transform DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtransformApp
// See transform.cpp for the implementation of this class
//

class CtransformApp : public CWinApp
{
public:
	CtransformApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
