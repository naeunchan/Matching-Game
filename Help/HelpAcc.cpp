// HelpAcc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "HelpAcc.h"
#include "afxdialogex.h"
#include "resource.h"


// CHelpAcc ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CHelpAcc, CDialogEx)

CHelpAcc::CHelpAcc(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_ACC, pParent)
{

}

CHelpAcc::~CHelpAcc()
{
}

void CHelpAcc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CHelpAcc, CDialogEx)
	ON_WM_ERASEBKGND()
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CHelpAcc �޽��� ó�����Դϴ�.


BOOL CHelpAcc::OnEraseBkgnd(CDC* pDC)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CRect rt;
	GetClientRect(rt);
	pDC->FillSolidRect(rt, RGB(0, 0, 0));
	return TRUE;

	return CDialogEx::OnEraseBkgnd(pDC);
}


BOOL CHelpAcc::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	LONG ExtendedStyle = GetWindowLong(GetSafeHwnd(), GWL_EXSTYLE);
	SetWindowLong(GetSafeHwnd(), GWL_EXSTYLE, ExtendedStyle | WS_EX_LAYERED);

	BYTE byAlphaValue = 200;
	::SetLayeredWindowAttributes(GetSafeHwnd(), 0, byAlphaValue, LWA_ALPHA);

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	GetDlgItem(IDC_STATIC_ACC1)->GetFont()->GetLogFont(&m_lgfontAcc1);
	m_lgfontAcc1.lfWeight = 1000;
	m_lgfontAcc1.lfHeight = 20;
	m_fontAcc1.CreateFontIndirect(&m_lgfontAcc1);
	GetDlgItem(IDC_STATIC_ACC1)->SetFont(&m_fontAcc1);
	GetDlgItem(IDC_STATIC_ACC2)->SetFont(&m_fontAcc1);
	GetDlgItem(IDC_STATIC_ACC3)->SetFont(&m_fontAcc1);
	GetDlgItem(IDC_STATIC_ACC4)->SetFont(&m_fontAcc1);
	GetDlgItem(IDC_STATIC_ACC5)->SetFont(&m_fontAcc1);
	GetDlgItem(IDC_STATIC_ACC7)->SetFont(&m_fontAcc1);

	GetDlgItem(IDC_STATIC_CARDACC)->GetFont()->GetLogFont(&m_lgfontAcc2);
	m_lgfontAcc2.lfWeight = 800;
	m_lgfontAcc2.lfHeight = 17;
	m_fontAcc2.CreateFontIndirect(&m_lgfontAcc2);
	GetDlgItem(IDC_STATIC_CARDACC)->SetFont(&m_fontAcc2);
	GetDlgItem(IDC_STATIC_FUNCACC)->SetFont(&m_fontAcc2);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


HBRUSH CHelpAcc::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  ���⼭ DC�� Ư���� �����մϴ�.

	// TODO:  �⺻���� �������� ������ �ٸ� �귯�ø� ��ȯ�մϴ�.

	pDC->SetTextColor(RGB(255, 255, 255));
	pDC->SetBkMode(TRANSPARENT);
	return (HBRUSH)::GetStockObject(NULL_BRUSH);

	return hbr;
}
