#pragma once
#include "afxwin.h"


// CHelpGame ��ȭ �����Դϴ�.

class CHelpGame : public CDialogEx
{
	DECLARE_DYNAMIC(CHelpGame)

public:
	CHelpGame(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CHelpGame();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_HELPGAME };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	virtual BOOL OnInitDialog();
	CFont m_font1;
	LOGFONT m_lgfont1;
	CFont m_font2;
	LOGFONT m_lgfont2;
};
