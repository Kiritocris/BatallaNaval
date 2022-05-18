
// BatallaNavalCDlg.h: archivo de encabezado
//

#pragma once
#include "Game.h"

// Cuadro de diálogo de CBatallaNavalCDlg
class CBatallaNavalCDlg : public CDialogEx
{
	// Construcción
public:
	CBatallaNavalCDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BATALLANAVALC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString T00,T01,T02,T03,T04,T05,T06,T07;//8
	CString T10,T11,T12,T13,T14,T15,T16,T17;//16
	CString T20,T21,T22,T23,T24,T25,T26,T27;//24
	CString T30,T31,T32,T33,T34,T35,T36,T37;//32
	CString T40,T41,T42,T43,T44,T45,T46,T47;//40
	CString T50,T51,T52,T53,T54,T55,T56,T57;//48
	CString T60,T61,T62,T63,T64,T65,T66,T67;//56
	CString T70,T71,T72,T73,T74,T75,T76,T77;//64

	CString B00, B01, B02, B03, B04, B05, B06, B07;//8
	CString B10, B11, B12, B13, B14, B15, B16, B17;//16
	CString B20, B21, B22, B23, B24, B25, B26, B27;//24
	CString B30, B31, B32, B33, B34, B35, B36, B37;//32
	CString B40, B41, B42, B43, B44, B45, B46, B47;//40
	CString B50, B51, B52, B53, B54, B55, B56, B57;//48
	CString B60, B61, B62, B63, B64, B65, B66, B67;//56
	CString B70, B71, B72, B73, B74, B75, B76, B77;//64

	CString B[8][8];
	int tabp1[8][8];
	int tabb1[8][8];
	Game P1;
	Game B1;
	int posx;
	int posy;
	CString Name;
public:
	afx_msg void OnBnClickedOk();
	void setresult(int x,int y);
	void show();
	void attack(int x, int y);
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton63();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton65();
	CProgressCtrl Inicializador;
private:
	CString Winner;
	CString Estado;
};
