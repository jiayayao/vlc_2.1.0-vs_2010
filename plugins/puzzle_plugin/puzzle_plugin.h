// puzzle_plugin.h : main header file for the puzzle_plugin DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cpuzzle_pluginApp
// See puzzle_plugin.cpp for the implementation of this class
//

class Cpuzzle_pluginApp : public CWinApp
{
public:
	Cpuzzle_pluginApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
