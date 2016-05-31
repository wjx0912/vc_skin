//Download by http://www.NewXing.com
// SkinTestDlg.h : header file
//

#if !defined(AFX_SKINTESTDLG_H__3379ED5A_FA9B_4761_B9D8_9F545346D1F3__INCLUDED_)
#define AFX_SKINTESTDLG_H__3379ED5A_FA9B_4761_B9D8_9F545346D1F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSkinTestDlg dialog
// CAboutDlg dialog used for App About

//include header for skin win
#include "SkinWin\SkinWin.h"
#include "SkinWin\SkinButton.h"

class CSkinTestDlg : public CDialog
{
// Construction
public:
	BOOL SetSkin( CString file );
	BOOL SubClassButton( HWND hwnd );
	CSkinTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSkinTestDlg)
	enum { IDD = IDD_SKINTEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSkinTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	CSkinButtonResource		m_btnres;		//skin button resource
	CSkinWin				m_skinWin;		//skin win
	BOOL					m_bFirst;		//first time call
	CObList m_wndList;


	// Generated message map functions
	//{{AFX_MSG(CSkinTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnDestroy();
	afx_msg void OnNeosytle();
	afx_msg void OnXpstyle();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKINTESTDLG_H__3379ED5A_FA9B_4761_B9D8_9F545346D1F3__INCLUDED_)
