// access_smb.h : main header file for the access_smb DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_smbApp
// See access_smb.cpp for the implementation of this class
//

class Caccess_smbApp : public CWinApp
{
public:
	Caccess_smbApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
