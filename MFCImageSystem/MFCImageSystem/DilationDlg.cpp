// DilationDlg.cpp: 实现文件
//

#include "pch.h"
#include "MFCImageSystem.h"
#include "afxdialogex.h"
#include "DilationDlg.h"


// DilationDlg 对话框

IMPLEMENT_DYNAMIC(DilationDlg, CDialogEx)

DilationDlg::DilationDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DilationDlg, pParent)
	, m_value(0)
{

}

DilationDlg::~DilationDlg()
{
}

void DilationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_value);
}


BEGIN_MESSAGE_MAP(DilationDlg, CDialogEx)
END_MESSAGE_MAP()


// DilationDlg 消息处理程序
