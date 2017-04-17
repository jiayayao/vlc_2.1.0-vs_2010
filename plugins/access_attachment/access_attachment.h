// access_attachment.h : main header file for the access_attachment DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_attachmentApp
// See access_attachment.cpp for the implementation of this class
//

class Caccess_attachmentApp : public CWinApp
{
public:
	Caccess_attachmentApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
