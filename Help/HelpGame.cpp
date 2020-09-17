// HelpGame.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "HelpGame.h"
#include "afxdialogex.h"
#include "resource.h"


// CHelpGame ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CHelpGame, CDialogEx)

CHelpGame::CHelpGame(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_HELPGAME, pParent)
{

}

CHelpGame::~CHelpGame()
{
}

void CHelpGame::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CHelpGame, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()


// CHelpGame �޽��� ó�����Դϴ�.


HBRUSH CHelpGame::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  ���⼭ DC�� Ư���� �����մϴ�.

	// TODO:  �⺻���� �������� ������ �ٸ� �귯�ø� ��ȯ�մϴ�.
	pDC->SetTextColor(RGB(255, 255, 255));
	pDC->SetBkMode(TRANSPARENT);
	return (HBRUSH)::GetStockObject(NULL_BRUSH);

	return hbr;
}


BOOL CHelpGame::OnEraseBkgnd(CDC* pDC)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CRect rt;
	GetClientRect(rt);
	pDC->FillSolidRect(rt, RGB(0, 0, 0));
	return TRUE;

	return CDialogEx::OnEraseBkgnd(pDC);
}


BOOL CHelpGame::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	LONG ExtendedStyle = GetWindowLong(GetSafeHwnd(), GWL_EXSTYLE);
	SetWindowLong(GetSafeHwnd(), GWL_EXSTYLE, ExtendedStyle | WS_EX_LAYERED);

	BYTE byAlphaValue = 200;
	::SetLayeredWindowAttributes(GetSafeHwnd(), 0, byAlphaValue, LWA_ALPHA);
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	GetDlgItem(IDC_STATIC1)->GetFont()->GetLogFont(&m_lgfont1);
	m_lgfont1.lfWeight = 1000;
	m_lgfont1.lfHeight = 20;
	m_font1.CreateFontIndirect(&m_lgfont1);
	GetDlgItem(IDC_STATIC1)->SetFont(&m_font1);
	GetDlgItem(IDC_STATIC2)->SetFont(&m_font1);
	GetDlgItem(IDC_STATIC3)->SetFont(&m_font1);
	GetDlgItem(IDC_STATIC4)->SetFont(&m_font1);
	GetDlgItem(IDC_STATIC5)->SetFont(&m_font1);
	GetDlgItem(IDC_STATIC6)->SetFont(&m_font1);

	GetDlgItem(IDC_STATIC_GAMERULE)->GetFont()->GetLogFont(&m_lgfont2);
	m_lgfont2.lfWeight = 800;
	m_lgfont2.lfHeight = 17;
	m_font2.CreateFontIndirect(&m_lgfont2);
	GetDlgItem(IDC_STATIC_GAMERULE)->SetFont(&m_font2);
	GetDlgItem(IDC_STATIC_HINT)->SetFont(&m_font2);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
