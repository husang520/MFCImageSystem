#pragma once
#include "afxdialogex.h"


// DilationDlg 对话框

class DilationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(DilationDlg)

public:
	DilationDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DilationDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DilationDlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int m_value;
};
