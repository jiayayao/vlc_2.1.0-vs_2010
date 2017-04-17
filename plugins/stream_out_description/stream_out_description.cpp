// stream_out_description.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "stream_out_description.h"

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


// Cstream_out_descriptionApp

BEGIN_MESSAGE_MAP(Cstream_out_descriptionApp, CWinApp)
END_MESSAGE_MAP()


// Cstream_out_descriptionApp construction

Cstream_out_descriptionApp::Cstream_out_descriptionApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Cstream_out_descriptionApp object

Cstream_out_descriptionApp theApp;


// Cstream_out_descriptionApp initialization

BOOL Cstream_out_descriptionApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
