// ErosionDlg.cpp: 实现文件
//

#include "pch.h"
#include "MFCImageSystem.h"
#include "afxdialogex.h"
#include "ErosionDlg.h"


// ErosionDlg 对话框

IMPLEMENT_DYNAMIC(ErosionDlg, CDialogEx)

ErosionDlg::ErosionDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ErosionDlg, pParent)
	, erosionSize(0)
{

}

ErosionDlg::~ErosionDlg()
{
}

void ErosionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, erosionSize);
}


BEGIN_MESSAGE_MAP(ErosionDlg, CDialogEx)
END_MESSAGE_MAP()


// ErosionDlg 消息处理程序
