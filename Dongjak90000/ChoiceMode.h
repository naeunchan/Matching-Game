#pragma once

#include "UserID.h"
#include "Rank.h"
#include "afxwin.h"
#include "afxext.h"
#include "afxbutton.h"

// CChoiceMode ��ȭ �����Դϴ�.

class CChoiceMode : public CDialogEx
{
	DECLARE_DYNAMIC(CChoiceMode)

public:
	CChoiceMode(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CChoiceMode();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHOICEMODE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonExit2();
	afx_msg void OnBnClickedRadioOption1();
	int m_Option;
	afx_msg void OnBnClickedRadioOption2();
	afx_msg void OnBnClickedRadioOption3();
	afx_msg void OnClickedButton1p();
	afx_msg void OnClickedButtonIdmanager();
	void UpdateComboBox();
	CComboBox m_cbP1;
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangeComboP1();
	afx_msg void OnBnClickedRadioOption4();
	int m_cbCheckP1;
	void SaveTxt();
	afx_msg void OnClickedButtonRank();
	afx_msg void OnPaint();
	CBitmapButton m_btn;
	CMFCButton m_btnP1;
	CMFCButton m_btnIDManager;
	CMFCButton m_btnRank;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CMFCButton m_btnRadio1;
	CMFCButton m_btnRadio2;
	CMFCButton m_btnRadio3;
	CMFCButton m_btnRadio4;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
