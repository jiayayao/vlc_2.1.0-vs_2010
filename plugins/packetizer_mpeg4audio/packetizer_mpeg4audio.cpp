// packetizer_mpeg4audio.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "packetizer_mpeg4audio.h"

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


// Cpacketizer_mpeg4audioApp

BEGIN_MESSAGE_MAP(Cpacketizer_mpeg4audioApp, CWinApp)
END_MESSAGE_MAP()


// Cpacketizer_mpeg4audioApp construction

Cpacketizer_mpeg4audioApp::Cpacketizer_mpeg4audioApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Cpacketizer_mpeg4audioApp object

Cpacketizer_mpeg4audioApp theApp;


// Cpacketizer_mpeg4audioApp initialization

BOOL Cpacketizer_mpeg4audioApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
