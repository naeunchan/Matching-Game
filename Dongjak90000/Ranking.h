#pragma once
#include "afxcmn.h"


// CRanking ��ȭ �����Դϴ�.

class CRanking : public CDialogEx
{
	DECLARE_DYNAMIC(CRanking)

public:
	CRanking(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CRanking();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_RANKING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl m_listRanking;
};
