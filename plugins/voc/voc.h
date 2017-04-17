// voc.h : main header file for the voc DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvocApp
// See voc.cpp for the implementation of this class
//

class CvocApp : public CWinApp
{
public:
	CvocApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
