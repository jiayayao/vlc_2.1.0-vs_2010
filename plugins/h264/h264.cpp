// h264.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "h264.h"

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


// Ch264App

BEGIN_MESSAGE_MAP(Ch264App, CWinApp)
END_MESSAGE_MAP()


// Ch264App construction

Ch264App::Ch264App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Ch264App object

Ch264App theApp;


// Ch264App initialization

BOOL Ch264App::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
