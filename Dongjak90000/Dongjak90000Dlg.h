
// Dongjak90000Dlg.h : ��� ����
//

#pragma once
#include "afxwin.h"

// CDongjak90000Dlg ��ȭ ����
class CDongjak90000Dlg : public CDialogEx
{
// �����Դϴ�.
public:
	CDongjak90000Dlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DONGJAK90000_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonExit();
	afx_msg void OnClickedButtonStart();
	afx_msg void OnClickedButtonLoad();
	void LoadTxt();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
