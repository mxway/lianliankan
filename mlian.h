// mlian.h : main header file for the MLIAN application
//

#if !defined(AFX_MLIAN_H__D6DE7FFC_2658_4107_AEE5_D4C32F5C78C0__INCLUDED_)
#define AFX_MLIAN_H__D6DE7FFC_2658_4107_AEE5_D4C32F5C78C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMlianApp:
// See mlian.cpp for the implementation of this class
//

class CMlianApp : public CWinApp
{
public:
	CMlianApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMlianApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMlianApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MLIAN_H__D6DE7FFC_2658_4107_AEE5_D4C32F5C78C0__INCLUDED_)
