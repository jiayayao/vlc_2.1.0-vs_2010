// h264.h : main header file for the h264 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Ch264App
// See h264.cpp for the implementation of this class
//

class Ch264App : public CWinApp
{
public:
	Ch264App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
