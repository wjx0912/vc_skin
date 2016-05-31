//Download by http://www.NewXing.com
// SkinTest.h : main header file for the SKINTEST application
//

#if !defined(AFX_SKINTEST_H__34A07355_B143_45D2_8A74_39CC5EBDAD6B__INCLUDED_)
#define AFX_SKINTEST_H__34A07355_B143_45D2_8A74_39CC5EBDAD6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSkinTestApp:
// See SkinTest.cpp for the implementation of this class
//

class CSkinTestApp : public CWinApp
{
public:
	CSkinTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSkinTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSkinTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKINTEST_H__34A07355_B143_45D2_8A74_39CC5EBDAD6B__INCLUDED_)
