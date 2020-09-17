#pragma once
#include "afxwin.h"


// CIDManager ��ȭ �����Դϴ�.

class CIDManager : public CDialogEx
{
	DECLARE_DYNAMIC(CIDManager)

public:
	CIDManager(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CIDManager();

	// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ID_MANAGER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	int m_nSelectedItem;
	afx_msg void OnClickedButtonInsert();
	afx_msg void OnClickedButtonDelete();
	virtual BOOL OnInitDialog();
	CListCtrl m_listMember;
	CString m_strID;
	afx_msg void OnClickListMember(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CEdit m_focusID;
};
