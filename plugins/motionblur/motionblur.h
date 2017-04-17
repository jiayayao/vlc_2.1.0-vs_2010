// motionblur.h : main header file for the motionblur DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmotionblurApp
// See motionblur.cpp for the implementation of this class
//

class CmotionblurApp : public CWinApp
{
public:
	CmotionblurApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
