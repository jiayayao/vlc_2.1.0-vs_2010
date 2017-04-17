// access_output_file.h : main header file for the access_output_file DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_output_fileApp
// See access_output_file.cpp for the implementation of this class
//

class Caccess_output_fileApp : public CWinApp
{
public:
	Caccess_output_fileApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
