// mlianDlg.h : header file
//

#if !defined(AFX_MLIANDLG_H__C6532AB6_E8E4_4F9B_A490_4DF99F67FA33__INCLUDED_)
#define AFX_MLIANDLG_H__C6532AB6_E8E4_4F9B_A490_4DF99F67FA33__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMlianDlg dialog

class CMlianDlg : public CDialog
{
// Construction
public:
	CMlianDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMlianDlg)
	enum { IDD = IDD_MLIAN_DIALOG };
	CProgressCtrl	m_progress;
	long	m_score;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMlianDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	HBITMAP hBitMap[23];
	int MAX_SECOND;
	int current_second;
	int num,nRow,nCol;
	void loadResource();
	void showButton();
	void judge(int row,int col);
	int  isFinish();
	int score;
	// Generated message map functions
	//{{AFX_MSG(CMlianDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButton10();
	afx_msg void OnButton11();
	afx_msg void OnButton12();
	afx_msg void OnButton13();
	afx_msg void OnButton14();
	afx_msg void OnButton15();
	afx_msg void OnButton16();
	afx_msg void OnButton17();
	afx_msg void OnButton18();
	afx_msg void OnButton19();
	afx_msg void OnButton20();
	afx_msg void OnButton21();
	afx_msg void OnButton22();
	afx_msg void OnButton23();
	afx_msg void OnButton24();
	afx_msg void OnButton25();
	afx_msg void OnButton26();
	afx_msg void OnButton27();
	afx_msg void OnButton28();
	afx_msg void OnButton29();
	afx_msg void OnButton30();
	afx_msg void OnButton31();
	afx_msg void OnButton32();
	afx_msg void OnButton33();
	afx_msg void OnButton34();
	afx_msg void OnButton35();
	afx_msg void OnButton36();
	afx_msg void OnButton37();
	afx_msg void OnButton38();
	afx_msg void OnButton39();
	afx_msg void OnButton40();
	afx_msg void OnButton50();
	afx_msg void OnButton49();
	afx_msg void OnButton48();
	afx_msg void OnButton46();
	afx_msg void OnButton47();
	afx_msg void OnButton45();
	afx_msg void OnButton44();
	afx_msg void OnButton43();
	afx_msg void OnButton42();
	afx_msg void OnButton41();
	afx_msg void OnButton51();
	afx_msg void OnButton52();
	afx_msg void OnButton53();
	afx_msg void OnButton54();
	afx_msg void OnButton55();
	afx_msg void OnButton56();
	afx_msg void OnButton57();
	afx_msg void OnButton58();
	afx_msg void OnButton59();
	afx_msg void OnButton60();
	afx_msg void OnButton61();
	afx_msg void OnButton62();
	afx_msg void OnButton63();
	afx_msg void OnButton64();
	afx_msg void OnButton65();
	afx_msg void OnButton66();
	afx_msg void OnButton67();
	afx_msg void OnButton68();
	afx_msg void OnButton69();
	afx_msg void OnButton70();
	afx_msg void OnButton71();
	afx_msg void OnButton72();
	afx_msg void OnButton73();
	afx_msg void OnButton74();
	afx_msg void OnButton75();
	afx_msg void OnButton76();
	afx_msg void OnButton77();
	afx_msg void OnButton78();
	afx_msg void OnButton79();
	afx_msg void OnButton80();
	afx_msg void OnButton81();
	afx_msg void OnButton82();
	afx_msg void OnButton83();
	afx_msg void OnButton84();
	afx_msg void OnButton85();
	afx_msg void OnButton86();
	afx_msg void OnButton87();
	afx_msg void OnButton88();
	afx_msg void OnButton89();
	afx_msg void OnButton90();
	afx_msg void OnButton91();
	afx_msg void OnButton92();
	afx_msg void OnButton93();
	afx_msg void OnButton94();
	afx_msg void OnButton95();
	afx_msg void OnButton96();
	afx_msg void OnButton97();
	afx_msg void OnButton98();
	afx_msg void OnButton99();
	afx_msg void OnButton100();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnLevelHigh();
	afx_msg void OnLevelLower();
	afx_msg void OnLevelNormal();
	afx_msg void OnLevelSuper();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MLIANDLG_H__C6532AB6_E8E4_4F9B_A490_4DF99F67FA33__INCLUDED_)
