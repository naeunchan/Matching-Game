#pragma once


// CHelpAcc ��ȭ �����Դϴ�.

class CHelpAcc : public CDialogEx
{
	DECLARE_DYNAMIC(CHelpAcc)

public:
	CHelpAcc(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CHelpAcc();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ACC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CFont m_fontAcc1;
	LOGFONT m_lgfontAcc1;
	CFont m_fontAcc2;
	LOGFONT m_lgfontAcc2;
};
