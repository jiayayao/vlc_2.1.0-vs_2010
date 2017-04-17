// motiondetect.h : main header file for the motiondetect DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmotiondetectApp
// See motiondetect.cpp for the implementation of this class
//

class CmotiondetectApp : public CWinApp
{
public:
	CmotiondetectApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
