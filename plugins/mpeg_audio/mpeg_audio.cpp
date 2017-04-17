// mpeg_audio.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "mpeg_audio.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//


// Cmpeg_audioApp

BEGIN_MESSAGE_MAP(Cmpeg_audioApp, CWinApp)
END_MESSAGE_MAP()


// Cmpeg_audioApp construction

Cmpeg_audioApp::Cmpeg_audioApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Cmpeg_audioApp object

Cmpeg_audioApp theApp;


// Cmpeg_audioApp initialization

BOOL Cmpeg_audioApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
