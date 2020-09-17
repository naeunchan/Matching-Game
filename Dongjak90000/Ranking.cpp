// Ranking.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Dongjak90000.h"
#include "Ranking.h"
#include "afxdialogex.h"


// CRanking ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CRanking, CDialogEx)

CRanking::CRanking(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_RANKING, pParent)
{

}

CRanking::~CRanking()
{
}

void CRanking::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_RANKING, m_listRanking);
}


BEGIN_MESSAGE_MAP(CRanking, CDialogEx)
END_MESSAGE_MAP()


// CRanking �޽��� ó�����Դϴ�.


BOOL CRanking::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	LPWSTR list[3] = { _T("����"), _T("ID"), _T("����") };
	int nWidth[3] = { 50, 150, 196 };
	CString strCount;
	int nCount = m_listRanking.GetItemCount();

	for (int i = 0; i < 3; i++)
	{
		m_listRanking.InsertColumn(i, list[i], LVCFMT_CENTER, nWidth[i]);
	}

	m_listRanking.SetExtendedStyle(m_listRanking.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	
	while (nCount < RK.totalRankCnt) {
		strCount.Format(_T("%d"), nCount + 1);
		m_listRanking.InsertItem(nCount, strCount);
		m_listRanking.SetItem(nCount, 1, LVIF_TEXT, RK.GetTotalName(nCount), 0, 0, 0, 0);
		m_listRanking.SetItem(nCount, 2, LVIF_TEXT, RK.GetTotalRank(nCount), 0, 0, 0, 0);
		nCount = m_listRanking.GetItemCount();
	}
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
