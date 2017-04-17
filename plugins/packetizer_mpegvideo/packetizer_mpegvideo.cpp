// packetizer_mpegvideo.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "packetizer_mpegvideo.h"

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


// Cpacketizer_mpegvideoApp

BEGIN_MESSAGE_MAP(Cpacketizer_mpegvideoApp, CWinApp)
END_MESSAGE_MAP()


// Cpacketizer_mpegvideoApp construction

Cpacketizer_mpegvideoApp::Cpacketizer_mpegvideoApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Cpacketizer_mpegvideoApp object

Cpacketizer_mpegvideoApp theApp;


// Cpacketizer_mpegvideoApp initialization

BOOL Cpacketizer_mpegvideoApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
