// mlianDlg.cpp : implementation file
//

#include "stdafx.h"
#include "mlian.h"
#include "mlianDlg.h"
#include "process.h"
#include<fstream.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
extern int data_grid[12][12];
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMlianDlg dialog

CMlianDlg::CMlianDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMlianDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMlianDlg)
	m_score = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMlianDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMlianDlg)
	DDX_Control(pDX, IDC_PROGRESS1, m_progress);
	DDX_Text(pDX, IDC_EDIT1, m_score);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMlianDlg, CDialog)
	//{{AFX_MSG_MAP(CMlianDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15)
	ON_BN_CLICKED(IDC_BUTTON16, OnButton16)
	ON_BN_CLICKED(IDC_BUTTON17, OnButton17)
	ON_BN_CLICKED(IDC_BUTTON18, OnButton18)
	ON_BN_CLICKED(IDC_BUTTON19, OnButton19)
	ON_BN_CLICKED(IDC_BUTTON20, OnButton20)
	ON_BN_CLICKED(IDC_BUTTON21, OnButton21)
	ON_BN_CLICKED(IDC_BUTTON22, OnButton22)
	ON_BN_CLICKED(IDC_BUTTON23, OnButton23)
	ON_BN_CLICKED(IDC_BUTTON24, OnButton24)
	ON_BN_CLICKED(IDC_BUTTON25, OnButton25)
	ON_BN_CLICKED(IDC_BUTTON26, OnButton26)
	ON_BN_CLICKED(IDC_BUTTON27, OnButton27)
	ON_BN_CLICKED(IDC_BUTTON28, OnButton28)
	ON_BN_CLICKED(IDC_BUTTON29, OnButton29)
	ON_BN_CLICKED(IDC_BUTTON30, OnButton30)
	ON_BN_CLICKED(IDC_BUTTON31, OnButton31)
	ON_BN_CLICKED(IDC_BUTTON32, OnButton32)
	ON_BN_CLICKED(IDC_BUTTON33, OnButton33)
	ON_BN_CLICKED(IDC_BUTTON34, OnButton34)
	ON_BN_CLICKED(IDC_BUTTON35, OnButton35)
	ON_BN_CLICKED(IDC_BUTTON36, OnButton36)
	ON_BN_CLICKED(IDC_BUTTON37, OnButton37)
	ON_BN_CLICKED(IDC_BUTTON38, OnButton38)
	ON_BN_CLICKED(IDC_BUTTON39, OnButton39)
	ON_BN_CLICKED(IDC_BUTTON40, OnButton40)
	ON_BN_CLICKED(IDC_BUTTON50, OnButton50)
	ON_BN_CLICKED(IDC_BUTTON49, OnButton49)
	ON_BN_CLICKED(IDC_BUTTON48, OnButton48)
	ON_BN_CLICKED(IDC_BUTTON46, OnButton46)
	ON_BN_CLICKED(IDC_BUTTON47, OnButton47)
	ON_BN_CLICKED(IDC_BUTTON45, OnButton45)
	ON_BN_CLICKED(IDC_BUTTON44, OnButton44)
	ON_BN_CLICKED(IDC_BUTTON43, OnButton43)
	ON_BN_CLICKED(IDC_BUTTON42, OnButton42)
	ON_BN_CLICKED(IDC_BUTTON41, OnButton41)
	ON_BN_CLICKED(IDC_BUTTON51, OnButton51)
	ON_BN_CLICKED(IDC_BUTTON52, OnButton52)
	ON_BN_CLICKED(IDC_BUTTON53, OnButton53)
	ON_BN_CLICKED(IDC_BUTTON54, OnButton54)
	ON_BN_CLICKED(IDC_BUTTON55, OnButton55)
	ON_BN_CLICKED(IDC_BUTTON56, OnButton56)
	ON_BN_CLICKED(IDC_BUTTON57, OnButton57)
	ON_BN_CLICKED(IDC_BUTTON58, OnButton58)
	ON_BN_CLICKED(IDC_BUTTON59, OnButton59)
	ON_BN_CLICKED(IDC_BUTTON60, OnButton60)
	ON_BN_CLICKED(IDC_BUTTON61, OnButton61)
	ON_BN_CLICKED(IDC_BUTTON62, OnButton62)
	ON_BN_CLICKED(IDC_BUTTON63, OnButton63)
	ON_BN_CLICKED(IDC_BUTTON64, OnButton64)
	ON_BN_CLICKED(IDC_BUTTON65, OnButton65)
	ON_BN_CLICKED(IDC_BUTTON66, OnButton66)
	ON_BN_CLICKED(IDC_BUTTON67, OnButton67)
	ON_BN_CLICKED(IDC_BUTTON68, OnButton68)
	ON_BN_CLICKED(IDC_BUTTON69, OnButton69)
	ON_BN_CLICKED(IDC_BUTTON70, OnButton70)
	ON_BN_CLICKED(IDC_BUTTON71, OnButton71)
	ON_BN_CLICKED(IDC_BUTTON72, OnButton72)
	ON_BN_CLICKED(IDC_BUTTON73, OnButton73)
	ON_BN_CLICKED(IDC_BUTTON74, OnButton74)
	ON_BN_CLICKED(IDC_BUTTON75, OnButton75)
	ON_BN_CLICKED(IDC_BUTTON76, OnButton76)
	ON_BN_CLICKED(IDC_BUTTON77, OnButton77)
	ON_BN_CLICKED(IDC_BUTTON78, OnButton78)
	ON_BN_CLICKED(IDC_BUTTON79, OnButton79)
	ON_BN_CLICKED(IDC_BUTTON80, OnButton80)
	ON_BN_CLICKED(IDC_BUTTON81, OnButton81)
	ON_BN_CLICKED(IDC_BUTTON82, OnButton82)
	ON_BN_CLICKED(IDC_BUTTON83, OnButton83)
	ON_BN_CLICKED(IDC_BUTTON84, OnButton84)
	ON_BN_CLICKED(IDC_BUTTON85, OnButton85)
	ON_BN_CLICKED(IDC_BUTTON86, OnButton86)
	ON_BN_CLICKED(IDC_BUTTON87, OnButton87)
	ON_BN_CLICKED(IDC_BUTTON88, OnButton88)
	ON_BN_CLICKED(IDC_BUTTON89, OnButton89)
	ON_BN_CLICKED(IDC_BUTTON90, OnButton90)
	ON_BN_CLICKED(IDC_BUTTON91, OnButton91)
	ON_BN_CLICKED(IDC_BUTTON92, OnButton92)
	ON_BN_CLICKED(IDC_BUTTON93, OnButton93)
	ON_BN_CLICKED(IDC_BUTTON94, OnButton94)
	ON_BN_CLICKED(IDC_BUTTON95, OnButton95)
	ON_BN_CLICKED(IDC_BUTTON96, OnButton96)
	ON_BN_CLICKED(IDC_BUTTON97, OnButton97)
	ON_BN_CLICKED(IDC_BUTTON98, OnButton98)
	ON_BN_CLICKED(IDC_BUTTON99, OnButton99)
	ON_BN_CLICKED(IDC_BUTTON100, OnButton100)
	ON_WM_TIMER()
	ON_COMMAND(IDC_LEVEL_HIGH, OnLevelHigh)
	ON_COMMAND(IDC_LEVEL_LOWER, OnLevelLower)
	ON_COMMAND(IDC_LEVEL_NORMAL, OnLevelNormal)
	ON_COMMAND(IDC_LEVEL_SUPER, OnLevelSuper)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMlianDlg message handlers

BOOL CMlianDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	loadResource();
	score = 0;
	m_score = score;
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMlianDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMlianDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMlianDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMlianDlg::loadResource()
{
	int i,sBId = IDB_BITMAP1;
	for(i=0; i<19; i++)
	{
		hBitMap[i] = LoadBitmap(AfxGetInstanceHandle(),
			MAKEINTRESOURCE(sBId+i));
	}
}

void CMlianDlg::showButton()
{
	int i,j,sButtonId = IDC_BUTTON1;
	CButton *btn;
	for(i=1; i<11; i++)
	{
		for(j=1; j<11; j++)
		{
			btn = (CButton*)GetDlgItem((i-1)*10+(j-1)+sButtonId);
			btn->SetBitmap(hBitMap[data_grid[i][j]-1]);
			btn->ShowWindow(SW_SHOW);
		}
	}
}

void CMlianDlg::judge(int row,int col)
{
	int sButtonId = IDC_BUTTON1;
	CButton *btn;
	/*char msg[256];
	sprintf(msg,"(%d,%d) (%d,%d)",row,col,nRow,nCol);
	MessageBox(msg);
	*/
	if(row==nRow && col==nCol)return;
	if(num && (nRow != -1) && (nCol != -1))
	{
		if(data_grid[row][col] != data_grid[nRow][nCol])
		{
			num = 1;
			nRow = row;
			nCol = col;
			return;
		}
		if(bfsSearch(row,col,nRow,nCol))
		{
			//隐藏按钮
			btn = (CButton*)GetDlgItem((nRow-1)*10+nCol-1+sButtonId);
			btn->ShowWindow(SW_HIDE);
			btn = (CButton*)GetDlgItem((row-1)*10+col-1+sButtonId);
			btn->ShowWindow(SW_HIDE);
			//数据值要改变
			data_grid[nRow][nCol] = 0;
			data_grid[row][col] = 0;
			//消除两个方块后剩余时间加2s
			current_second = current_second+2;
			m_progress.SetPos(current_second);
			score = score+100;
			m_score = score;
			UpdateData(false);
		}
		//消除所有块
		if(isFinish())
		{
			KillTimer(1);
		}
		num = 0;
		nRow = -1;
		nCol = -1;
	}else
	{
		num = 1;
		nRow = row;
		nCol = col;
	}
}

void CMlianDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	judge(1,1);
}

void CMlianDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	judge(1,2);
}

void CMlianDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	judge(1,3);
}

void CMlianDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	judge(1,4);
}

void CMlianDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	judge(1,5);
}

void CMlianDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	judge(1,6);
}

void CMlianDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
	judge(1,7);
}

void CMlianDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
	judge(1,8);
}

void CMlianDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
	judge(1,9);
}

void CMlianDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
	judge(1,10);
}

void CMlianDlg::OnButton11() 
{
	// TODO: Add your control notification handler code here
	judge(2,1);
}

void CMlianDlg::OnButton12() 
{
	// TODO: Add your control notification handler code here
	judge(2,2);
}

void CMlianDlg::OnButton13() 
{
	// TODO: Add your control notification handler code here
	judge(2,3);
}

void CMlianDlg::OnButton14() 
{
	// TODO: Add your control notification handler code here
	judge(2,4);
}

void CMlianDlg::OnButton15() 
{
	// TODO: Add your control notification handler code here
	judge(2,5);
}

void CMlianDlg::OnButton16() 
{
	// TODO: Add your control notification handler code here
	judge(2,6);
}

void CMlianDlg::OnButton17() 
{
	// TODO: Add your control notification handler code here
	judge(2,7);
}

void CMlianDlg::OnButton18() 
{
	// TODO: Add your control notification handler code here
	judge(2,8);
}

void CMlianDlg::OnButton19() 
{
	// TODO: Add your control notification handler code here
	judge(2,9);
}

void CMlianDlg::OnButton20() 
{
	// TODO: Add your control notification handler code here
	judge(2,10);
}

void CMlianDlg::OnButton21() 
{
	// TODO: Add your control notification handler code here
	judge(3,1);
}

void CMlianDlg::OnButton22() 
{
	// TODO: Add your control notification handler code here
	judge(3,2);
}

void CMlianDlg::OnButton23() 
{
	// TODO: Add your control notification handler code here
	judge(3,3);
}

void CMlianDlg::OnButton24() 
{
	// TODO: Add your control notification handler code here
	judge(3,4);
}

void CMlianDlg::OnButton25() 
{
	// TODO: Add your control notification handler code here
	judge(3,5);
}

void CMlianDlg::OnButton26() 
{
	// TODO: Add your control notification handler code here
	judge(3,6);
}

void CMlianDlg::OnButton27() 
{
	// TODO: Add your control notification handler code here
	judge(3,7);
}

void CMlianDlg::OnButton28() 
{
	// TODO: Add your control notification handler code here
	judge(3,8);
}

void CMlianDlg::OnButton29() 
{
	// TODO: Add your control notification handler code here
	judge(3,9);
}

void CMlianDlg::OnButton30() 
{
	// TODO: Add your control notification handler code here
	judge(3,10);
}

void CMlianDlg::OnButton31() 
{
	// TODO: Add your control notification handler code here
	judge(4,1);
}

void CMlianDlg::OnButton32() 
{
	// TODO: Add your control notification handler code here
	judge(4,2);
}

void CMlianDlg::OnButton33() 
{
	// TODO: Add your control notification handler code here
	judge(4,3);
}

void CMlianDlg::OnButton34() 
{
	// TODO: Add your control notification handler code here
	judge(4,4);
}

void CMlianDlg::OnButton35() 
{
	// TODO: Add your control notification handler code here
	judge(4,5);
}

void CMlianDlg::OnButton36() 
{
	// TODO: Add your control notification handler code here
	judge(4,6);
}

void CMlianDlg::OnButton37() 
{
	// TODO: Add your control notification handler code here
	judge(4,7);
}

void CMlianDlg::OnButton38() 
{
	// TODO: Add your control notification handler code here
	judge(4,8);
}

void CMlianDlg::OnButton39() 
{
	// TODO: Add your control notification handler code here
	judge(4,9);
}

void CMlianDlg::OnButton40() 
{
	// TODO: Add your control notification handler code here
	judge(4,10);
}

void CMlianDlg::OnButton50() 
{
	// TODO: Add your control notification handler code here
	judge(5,10);
}

void CMlianDlg::OnButton49() 
{
	// TODO: Add your control notification handler code here
	judge(5,9);
}

void CMlianDlg::OnButton48() 
{
	// TODO: Add your control notification handler code here
	judge(5,8);
}

void CMlianDlg::OnButton46() 
{
	// TODO: Add your control notification handler code here
	judge(5,6);
}

void CMlianDlg::OnButton47() 
{
	// TODO: Add your control notification handler code here
	judge(5,7);
}

void CMlianDlg::OnButton45() 
{
	// TODO: Add your control notification handler code here
	judge(5,5);
}

void CMlianDlg::OnButton44() 
{
	// TODO: Add your control notification handler code here
	judge(5,4);
}

void CMlianDlg::OnButton43() 
{
	// TODO: Add your control notification handler code here
	judge(5,3);
}

void CMlianDlg::OnButton42() 
{
	// TODO: Add your control notification handler code here
	judge(5,2);
}

void CMlianDlg::OnButton41() 
{
	// TODO: Add your control notification handler code here
	judge(5,1);
}

void CMlianDlg::OnButton51() 
{
	// TODO: Add your control notification handler code here
	judge(6,1);
}

void CMlianDlg::OnButton52() 
{
	// TODO: Add your control notification handler code here
	judge(6,2);
}

void CMlianDlg::OnButton53() 
{
	// TODO: Add your control notification handler code here
	judge(6,3);
}

void CMlianDlg::OnButton54() 
{
	// TODO: Add your control notification handler code here
	judge(6,4);
}

void CMlianDlg::OnButton55() 
{
	// TODO: Add your control notification handler code here
	judge(6,5);
}

void CMlianDlg::OnButton56() 
{
	// TODO: Add your control notification handler code here
	judge(6,6);
}

void CMlianDlg::OnButton57() 
{
	// TODO: Add your control notification handler code here
	judge(6,7);
}

void CMlianDlg::OnButton58() 
{
	// TODO: Add your control notification handler code here
	judge(6,8);
}

void CMlianDlg::OnButton59() 
{
	// TODO: Add your control notification handler code here
	judge(6,9);
}

void CMlianDlg::OnButton60() 
{
	// TODO: Add your control notification handler code here
	judge(6,10);
}

void CMlianDlg::OnButton61() 
{
	// TODO: Add your control notification handler code here
	judge(7,1);
}

void CMlianDlg::OnButton62() 
{
	// TODO: Add your control notification handler code here
	judge(7,2);
}

void CMlianDlg::OnButton63() 
{
	// TODO: Add your control notification handler code here
	judge(7,3);
}

void CMlianDlg::OnButton64() 
{
	// TODO: Add your control notification handler code here
	judge(7,4);
}

void CMlianDlg::OnButton65() 
{
	// TODO: Add your control notification handler code here
	judge(7,5);
}

void CMlianDlg::OnButton66() 
{
	// TODO: Add your control notification handler code here
	judge(7,6);
}

void CMlianDlg::OnButton67() 
{
	// TODO: Add your control notification handler code here
	judge(7,7);
}

void CMlianDlg::OnButton68() 
{
	// TODO: Add your control notification handler code here
	judge(7,8);
}

void CMlianDlg::OnButton69() 
{
	// TODO: Add your control notification handler code here
	judge(7,9);
}

void CMlianDlg::OnButton70() 
{
	// TODO: Add your control notification handler code here
	judge(7,10);
}

void CMlianDlg::OnButton71() 
{
	// TODO: Add your control notification handler code here
	judge(8,1);
}

void CMlianDlg::OnButton72() 
{
	// TODO: Add your control notification handler code here
	judge(8,2);
}

void CMlianDlg::OnButton73() 
{
	// TODO: Add your control notification handler code here
	judge(8,3);
}

void CMlianDlg::OnButton74() 
{
	// TODO: Add your control notification handler code here
	judge(8,4);
}

void CMlianDlg::OnButton75() 
{
	// TODO: Add your control notification handler code here
	judge(8,5);
}

void CMlianDlg::OnButton76() 
{
	// TODO: Add your control notification handler code here
	judge(8,6);
}

void CMlianDlg::OnButton77() 
{
	// TODO: Add your control notification handler code here
	judge(8,7);
}

void CMlianDlg::OnButton78() 
{
	// TODO: Add your control notification handler code here
	judge(8,8);
}

void CMlianDlg::OnButton79() 
{
	// TODO: Add your control notification handler code here
	judge(8,9);
}

void CMlianDlg::OnButton80() 
{
	// TODO: Add your control notification handler code here
	judge(8,10);
}

void CMlianDlg::OnButton81() 
{
	// TODO: Add your control notification handler code here
	judge(9,1);
}

void CMlianDlg::OnButton82() 
{
	// TODO: Add your control notification handler code here
	judge(9,2);
}

void CMlianDlg::OnButton83() 
{
	// TODO: Add your control notification handler code here
	judge(9,3);
}

void CMlianDlg::OnButton84() 
{
	// TODO: Add your control notification handler code here
	judge(9,4);
}

void CMlianDlg::OnButton85() 
{
	// TODO: Add your control notification handler code here
	judge(9,5);
}

void CMlianDlg::OnButton86() 
{
	// TODO: Add your control notification handler code here
	judge(9,6);
}

void CMlianDlg::OnButton87() 
{
	// TODO: Add your control notification handler code here
	judge(9,7);
}

void CMlianDlg::OnButton88() 
{
	// TODO: Add your control notification handler code here
	judge(9,8);
}

void CMlianDlg::OnButton89() 
{
	// TODO: Add your control notification handler code here
	judge(9,9);
}

void CMlianDlg::OnButton90() 
{
	// TODO: Add your control notification handler code here
	judge(9,10);
}

void CMlianDlg::OnButton91() 
{
	// TODO: Add your control notification handler code here
	judge(10,1);
}

void CMlianDlg::OnButton92() 
{
	// TODO: Add your control notification handler code here
	judge(10,2);
}

void CMlianDlg::OnButton93() 
{
	// TODO: Add your control notification handler code here
	judge(10,3);
}

void CMlianDlg::OnButton94() 
{
	// TODO: Add your control notification handler code here
	judge(10,4);
}

void CMlianDlg::OnButton95() 
{
	// TODO: Add your control notification handler code here
	judge(10,5);
}

void CMlianDlg::OnButton96() 
{
	// TODO: Add your control notification handler code here
	judge(10,6);
}

void CMlianDlg::OnButton97() 
{
	// TODO: Add your control notification handler code here
	judge(10,7);
}

void CMlianDlg::OnButton98() 
{
	// TODO: Add your control notification handler code here
	judge(10,8);
}

void CMlianDlg::OnButton99() 
{
	// TODO: Add your control notification handler code here
	judge(10,9);
}

void CMlianDlg::OnButton100() 
{
	// TODO: Add your control notification handler code here
	judge(10,10);
}

void CMlianDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	if(current_second > MAX_SECOND)current_second = MAX_SECOND;
	current_second = current_second-1;
	if(current_second == 0)
	{
		KillTimer(1);
		MessageBox("时间到了!!!");
		score=0;
		m_score=0;
	}
	m_progress.SetPos(current_second);
	CDialog::OnTimer(nIDEvent);
}

//判断是否消除了所有的图片
int CMlianDlg::isFinish()
{
	int i,j,count=0;
	for(i=1; i<11; i++)
	{
		for(j=1; j<11; j++)
		{
			count = count+data_grid[i][j];
		}
	}
	if(count == 0)return 1;
	return 0;
}

void CMlianDlg::OnLevelHigh() 
{
	// TODO: Add your command handler code here
	MAX_SECOND = 60;
	init();
	showButton();
	SetTimer(1,1000,NULL);
	num = 0;
	nRow = -1;
	nCol = -1;
	m_progress.SetRange(0,MAX_SECOND);
	m_progress.SetPos(MAX_SECOND);
	current_second = MAX_SECOND;
}

void CMlianDlg::OnLevelLower() 
{
	// TODO: Add your command handler code here
	MAX_SECOND = 300;
	init();
	showButton();
	SetTimer(1,1000,NULL);
	num = 0;
	nRow = -1;
	nCol = -1;
	m_progress.SetRange(0,MAX_SECOND);
	m_progress.SetPos(MAX_SECOND);
	current_second = MAX_SECOND;
}

void CMlianDlg::OnLevelNormal() 
{
	// TODO: Add your command handler code here
	MAX_SECOND = 150;
	init();
	showButton();
	SetTimer(1,1000,NULL);
	num = 0;
	nRow = -1;
	nCol = -1;
	m_progress.SetRange(0,MAX_SECOND);
	m_progress.SetPos(MAX_SECOND);
	current_second = MAX_SECOND;
}

void CMlianDlg::OnLevelSuper() 
{
	// TODO: Add your command handler code here
	MAX_SECOND = 40;
	init();
	showButton();
	SetTimer(1,1000,NULL);
	num = 0;
	nRow = -1;
	nCol = -1;
	m_progress.SetRange(0,MAX_SECOND);
	m_progress.SetPos(MAX_SECOND);
	current_second = MAX_SECOND;
}
