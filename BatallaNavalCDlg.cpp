
// BatallaNavalCDlg.cpp: archivo de implementación
//

#include "pch.h"
#include "framework.h"
#include "BatallaNavalC.h"
#include "BatallaNavalCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cuadro de diálogo CAboutDlg utilizado para el comando Acerca de


class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

// Implementación
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cuadro de diálogo de CBatallaNavalCDlg



CBatallaNavalCDlg::CBatallaNavalCDlg(CWnd* pParent /*= nullptr*/)
	: CDialogEx(IDD_BATALLANAVALC_DIALOG, pParent)
	, T00(_T("")), T01(_T("")), T02(_T("")), T03(_T("")), T04(_T("")), T05(_T("")), T06(_T("")), T07(_T(""))
	, T10(_T("")), T11(_T("")), T12(_T("")), T13(_T("")), T14(_T("")), T15(_T("")), T16(_T("")), T17(_T(""))
	, T20(_T("")), T21(_T("")), T22(_T("")), T23(_T("")), T24(_T("")), T25(_T("")), T26(_T("")), T27(_T(""))
	, T30(_T("")), T31(_T("")), T32(_T("")), T33(_T("")), T34(_T("")), T35(_T("")), T36(_T("")), T37(_T(""))
	, T40(_T("")), T41(_T("")), T42(_T("")), T43(_T("")), T44(_T("")), T45(_T("")), T46(_T("")), T47(_T(""))
	, T50(_T("")), T51(_T("")), T52(_T("")), T53(_T("")), T54(_T("")), T55(_T("")), T56(_T("")), T57(_T(""))
	, T60(_T("")), T61(_T("")), T62(_T("")), T63(_T("")), T64(_T("")), T65(_T("")), T66(_T("")), T67(_T(""))
	, T70(_T("")), T71(_T("")), T72(_T("")), T73(_T("")), T74(_T("")), T75(_T("")), T76(_T("")), T77(_T(""))
	, posx(0)
	, posy(0)
	, Name(_T(""))
	, Winner(_T(""))
	, Estado(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBatallaNavalCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, T00);
	DDX_Text(pDX, IDC_EDIT2, T01);
	DDX_Text(pDX, IDC_EDIT3, T02);
	DDX_Text(pDX, IDC_EDIT4, T03);
	DDX_Text(pDX, IDC_EDIT5, T04);
	DDX_Text(pDX, IDC_EDIT6, T05);
	DDX_Text(pDX, IDC_EDIT7, T06);
	DDX_Text(pDX, IDC_EDIT116, T07);
	DDX_Text(pDX, IDC_EDIT8, T10);
	DDX_Text(pDX, IDC_EDIT9, T11);
	DDX_Text(pDX, IDC_EDIT10, T12);
	DDX_Text(pDX, IDC_EDIT11, T13);
	DDX_Text(pDX, IDC_EDIT12, T14);
	DDX_Text(pDX, IDC_EDIT13, T15);
	DDX_Text(pDX, IDC_EDIT14, T16);
	DDX_Text(pDX, IDC_EDIT117, T17);
	DDX_Text(pDX, IDC_EDIT15, T20);
	DDX_Text(pDX, IDC_EDIT16, T21);
	DDX_Text(pDX, IDC_EDIT17, T22);
	DDX_Text(pDX, IDC_EDIT18, T23);
	DDX_Text(pDX, IDC_EDIT19, T24);
	DDX_Text(pDX, IDC_EDIT20, T25);
	DDX_Text(pDX, IDC_EDIT21, T26);
	DDX_Text(pDX, IDC_EDIT118, T27);
	DDX_Text(pDX, IDC_EDIT22, T30);
	DDX_Text(pDX, IDC_EDIT23, T31);
	DDX_Text(pDX, IDC_EDIT24, T32);
	DDX_Text(pDX, IDC_EDIT25, T33);
	DDX_Text(pDX, IDC_EDIT26, T34);
	DDX_Text(pDX, IDC_EDIT27, T35);
	DDX_Text(pDX, IDC_EDIT28, T36);
	DDX_Text(pDX, IDC_EDIT119, T37);
	DDX_Text(pDX, IDC_EDIT29, T40);
	DDX_Text(pDX, IDC_EDIT30, T41);
	DDX_Text(pDX, IDC_EDIT31, T42);
	DDX_Text(pDX, IDC_EDIT32, T43);
	DDX_Text(pDX, IDC_EDIT33, T44);
	DDX_Text(pDX, IDC_EDIT34, T45);
	DDX_Text(pDX, IDC_EDIT35, T46);
	DDX_Text(pDX, IDC_EDIT120, T47);
	DDX_Text(pDX, IDC_EDIT36, T50);
	DDX_Text(pDX, IDC_EDIT37, T51);
	DDX_Text(pDX, IDC_EDIT38, T52);
	DDX_Text(pDX, IDC_EDIT39, T53);
	DDX_Text(pDX, IDC_EDIT40, T54);
	DDX_Text(pDX, IDC_EDIT41, T55);
	DDX_Text(pDX, IDC_EDIT42, T56);
	DDX_Text(pDX, IDC_EDIT121, T57);
	DDX_Text(pDX, IDC_EDIT43, T60);
	DDX_Text(pDX, IDC_EDIT44, T61);
	DDX_Text(pDX, IDC_EDIT45, T62);
	DDX_Text(pDX, IDC_EDIT46, T63);
	DDX_Text(pDX, IDC_EDIT47, T64);
	DDX_Text(pDX, IDC_EDIT48, T65);
	DDX_Text(pDX, IDC_EDIT49, T66);
	DDX_Text(pDX, IDC_EDIT122, T67);
	DDX_Text(pDX, IDC_EDIT101, T70);
	DDX_Text(pDX, IDC_EDIT102, T71);
	DDX_Text(pDX, IDC_EDIT103, T72);
	DDX_Text(pDX, IDC_EDIT104, T73);
	DDX_Text(pDX, IDC_EDIT105, T74);
	DDX_Text(pDX, IDC_EDIT106, T75);
	DDX_Text(pDX, IDC_EDIT107, T76);
	DDX_Text(pDX, IDC_EDIT123, T77);




	DDX_Text(pDX, IDC_EDIT99, posx);
	DDX_Text(pDX, IDC_EDIT100, posy);
	DDX_Text(pDX, IDC_EDIT115, Name);
	DDX_Control(pDX, IDC_PROGRESS1, Inicializador);
	DDX_Text(pDX, IDC_EDIT132, Winner);
	DDX_Text(pDX, IDC_EDIT133, Estado);
}

BEGIN_MESSAGE_MAP(CBatallaNavalCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CBatallaNavalCDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON3, &CBatallaNavalCDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CBatallaNavalCDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CBatallaNavalCDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &CBatallaNavalCDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CBatallaNavalCDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CBatallaNavalCDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CBatallaNavalCDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CBatallaNavalCDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CBatallaNavalCDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CBatallaNavalCDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CBatallaNavalCDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CBatallaNavalCDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CBatallaNavalCDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CBatallaNavalCDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CBatallaNavalCDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CBatallaNavalCDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CBatallaNavalCDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CBatallaNavalCDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CBatallaNavalCDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CBatallaNavalCDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CBatallaNavalCDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CBatallaNavalCDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CBatallaNavalCDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CBatallaNavalCDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CBatallaNavalCDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &CBatallaNavalCDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &CBatallaNavalCDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &CBatallaNavalCDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &CBatallaNavalCDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CBatallaNavalCDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CBatallaNavalCDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CBatallaNavalCDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CBatallaNavalCDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CBatallaNavalCDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &CBatallaNavalCDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &CBatallaNavalCDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CBatallaNavalCDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CBatallaNavalCDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CBatallaNavalCDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CBatallaNavalCDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CBatallaNavalCDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CBatallaNavalCDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CBatallaNavalCDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CBatallaNavalCDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &CBatallaNavalCDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &CBatallaNavalCDlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &CBatallaNavalCDlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &CBatallaNavalCDlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &CBatallaNavalCDlg::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &CBatallaNavalCDlg::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON51, &CBatallaNavalCDlg::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &CBatallaNavalCDlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &CBatallaNavalCDlg::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &CBatallaNavalCDlg::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &CBatallaNavalCDlg::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &CBatallaNavalCDlg::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &CBatallaNavalCDlg::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &CBatallaNavalCDlg::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &CBatallaNavalCDlg::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &CBatallaNavalCDlg::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &CBatallaNavalCDlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON62, &CBatallaNavalCDlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &CBatallaNavalCDlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON64, &CBatallaNavalCDlg::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &CBatallaNavalCDlg::OnBnClickedButton65)
END_MESSAGE_MAP()


// Controladores de mensajes de CBatallaNavalCDlg

BOOL CBatallaNavalCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Agregar el elemento de menú "Acerca de..." al menú del sistema.

	// IDM_ABOUTBOX debe estar en el intervalo de comandos del sistema.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Establecer el icono para este cuadro de diálogo.  El marco de trabajo realiza esta operación
	//  automáticamente cuando la ventana principal de la aplicación no es un cuadro de diálogo
	SetIcon(m_hIcon, TRUE);			// Establecer icono grande
	SetIcon(m_hIcon, FALSE);		// Establecer icono pequeño
	Inicializador.SetRange(0, 100);
	// TODO: agregar aquí inicialización adicional

	return TRUE;  // Devuelve TRUE  a menos que establezca el foco en un control
}

void CBatallaNavalCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// Si agrega un botón Minimizar al cuadro de diálogo, necesitará el siguiente código
//  para dibujar el icono.  Para aplicaciones MFC que utilicen el modelo de documentos y vistas,
//  esta operación la realiza automáticamente el marco de trabajo.

void CBatallaNavalCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // Contexto de dispositivo para dibujo

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrar icono en el rectángulo de cliente
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Dibujar el icono
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// El sistema llama a esta función para obtener el cursor que se muestra mientras el usuario arrastra
//  la ventana minimizada.
HCURSOR CBatallaNavalCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CBatallaNavalCDlg::OnBnClickedOk()
{

	UpdateData();
	int i = 0;
	P1.initab();
	for (int i = 0; i < 1; i++) {
		P1.settbl();
	}
	i = 20;
	Inicializador.SetPos(i);
	for (int i = 0; i < 2; i++) {
		P1.settbm();
	}
	i = 40;
	Inicializador.SetPos(i);
	for (int i = 0; i < 4; i++) {
		P1.settbs();
	}
	B1.initab();
	for (int i = 0; i < 1; i++) {
		B1.settbl();
	}
	i = 60;
	Inicializador.SetPos(i);
	for (int i = 0; i < 3; i++) {
		B1.settbm();
	}
	i = 80;
	Inicializador.SetPos(i);
	for (int i = 0; i < 1; i++) {
		B1.settbs();
	}


	if (Name == "") {
		Name = _T("Player 1");
	}
	i = 100;
	Inicializador.SetPos(i);
	UpdateData(false);
	GetDlgItem(IDOK)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT115)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON3)->EnableWindow(TRUE);
	GetDlgItem(IDC_PROGRESS1)->ShowWindow(SW_HIDE);
}

void CBatallaNavalCDlg::OnBnClickedButton3()
{
	UpdateData();

	
	setresult(posx, posy);
	if (B1.tab(posx, posy) == 1) {
		Estado = "Si acertaste";
	}
	if (B1.tab(posx, posy) == 0) {
		Estado = "No acertaste planea tu estrategia";
	}

	int num;
	srand(time(NULL));
	num = rand() % (8);

	int num2;
	srand(time(NULL));
	num2 = rand() % (8);

	int i = num;
	int j = num2;
	if (P1.tab(i, j) == 1) {
		P1.cont();
	}
	else if (P1.tab(i, j) == 0) {
	}

	if (B1.contdev() == 22) {
		GetDlgItem(IDC_EDIT132)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_BUTTON3)->EnableWindow(FALSE);
		GetDlgItem(IDOK)->EnableWindow(FALSE);
		Winner = _T("Ganaste");
	}
	else if (P1.contdev() == 12) {
		GetDlgItem(IDC_EDIT132)->ShowWindow(SW_SHOW);
		Winner = _T("Perdiste");
	}
		
	UpdateData(false);
}

void CBatallaNavalCDlg::setresult(int x, int y) {
	UpdateData();
	switch (x)
	{
	case 0:
		switch (y)
		{
		case 0:
			
			GetDlgItem(IDC_EDIT1)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON1)->ShowWindow(SW_HIDE);
			
			
			if (B1.tab(x, y) == 1) {
				T00 = _T("X");
				B1.cont();
			}
			else if (B1.tab(x, y) == 0) {
				T00 = _T("///");
			}
			
			
			break;
		case 1:
			GetDlgItem(IDC_EDIT2)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON2)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T01 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T01 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT3)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON4)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T02 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T02 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT4)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON5)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T03 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T03 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT5)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON6)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T04 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T04 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT6)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON7)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T05 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T05 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT7)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON8)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T06 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T06 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT116)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON9)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T07 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T07 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 1:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT8)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON10)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T10 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T10 = _T("X");
				B1.cont();
			}

			break;
		case 1:
			GetDlgItem(IDC_EDIT9)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON11)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T11 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T11 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT10)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON12)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T12 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T12 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON13)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T13 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T13 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON14)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T14 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T14 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT13)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON15)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T15 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T15 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT14)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON16)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T16 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T16 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT117)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON17)->ShowWindow(SW_HIDE);

			if (B1.tab(x, y) == 0) {
				T17 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T17 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT15)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON18)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T20 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T20 = _T("X");
				B1.cont();
			}

			
			break;
		case 1:
			GetDlgItem(IDC_EDIT16)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON19)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T21 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T21 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT17)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON20)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T22 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T22 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT18)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON21)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T23 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T23 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT19)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON22)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T24 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T24 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT20)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON23)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T25 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T25 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON24)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T26 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T26 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT118)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON25)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T27 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T27 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON26)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T30 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T30 = _T("X");
				B1.cont();
			}

			
			break;
		case 1:
			GetDlgItem(IDC_EDIT23)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON27)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T31 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T31 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT24)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON28)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T32 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T32 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT25)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON29)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T33 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T33 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT26)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON30)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T34 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T34 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT27)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON31)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T35 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T35 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT28)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON32)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T36 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T36 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT119)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON33)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T37 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T37 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 4:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT29)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON34)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T40 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T40 = _T("X");
				B1.cont();
			}

			break;
		case 1:
			GetDlgItem(IDC_EDIT30)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON35)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T41 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T41 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT31)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON36)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T42 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T42 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT32)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON37)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T43 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T43 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT33)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON38)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T44 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T44 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT34)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON39)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T45 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T45 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT35)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON40)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T46 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T46 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT120)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON41)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T47 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T47 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 5:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT36)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON42)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T50 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T50 = _T("X");
				B1.cont();
			}

			break;
		case 1:
			GetDlgItem(IDC_EDIT37)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON43)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T51 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T51 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT38)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON44)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T52 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T52 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT39)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON45)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T53 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T53 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT40)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON46)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T54 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T54 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT41)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON47)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T55 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T55 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT42)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON48)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T56 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T56 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT121)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON49)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T57 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T57 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 6:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT43)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON50)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T60 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T60 = _T("X");
				B1.cont();
			}

			break;
		case 1:
			GetDlgItem(IDC_EDIT44)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON51)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T61 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T61 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT45)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON52)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T62 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T62 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT46)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON53)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T63 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T63 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT47)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON54)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T64 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T64 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT48)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON55)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T65 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T65 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT49)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON56)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T66 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T66 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT122)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON57)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T67 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T67 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	case 7:
		switch (y)
		{
		case 0:

			GetDlgItem(IDC_EDIT101)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON58)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T70 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T70 = _T("X");
				B1.cont();
			}

			break;
		case 1:
			GetDlgItem(IDC_EDIT102)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON59)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T71 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T71 = _T("X");
				B1.cont();
			}
			break;
		case 2:
			GetDlgItem(IDC_EDIT103)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON60)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T72 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T72 = _T("X");
				B1.cont();
			}
			break;
		case 3:
			GetDlgItem(IDC_EDIT104)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON61)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T73 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T73 = _T("X");
				B1.cont();
			}
			break;
		case 4:
			GetDlgItem(IDC_EDIT105)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON62)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T74 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T74 = _T("X");
				B1.cont();
			}
			break;
		case 5:
			GetDlgItem(IDC_EDIT106)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON63)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T75 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T75 = _T("X");
				B1.cont();
			}
			break;
		case 6:
			GetDlgItem(IDC_EDIT107)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON64)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T76 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T76 = _T("X");
				B1.cont();
			}
			break;
		case 7:
			GetDlgItem(IDC_EDIT123)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_BUTTON65)->ShowWindow(SW_HIDE);
			

			if (B1.tab(x, y) == 0) {
				T77 = _T("///");
			}
			else if (B1.tab(x, y) == 1) {
				T77 = _T("X");
				B1.cont();
			}
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	UpdateData(false);
}

void CBatallaNavalCDlg::show() {
	UpdateData();
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			switch (x)
			{
			case 0:
				switch (y)
				{
				case 0:
					if (B1.tab(x, y) == 1) {
						T00 = _T("X");
						B1.cont();
					}
					else if (B1.tab(x, y) == 0) {
						T00 = _T("///");
					}
					break;
				case 1:
					if (B1.tab(x, y) == 0) {
						T01 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T01 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					if (B1.tab(x, y) == 0) {
						T02 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T02 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					if (B1.tab(x, y) == 0) {
						T03 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T03 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					if (B1.tab(x, y) == 0) {
						T04 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T04 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					if (B1.tab(x, y) == 0) {
						T05 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T05 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					if (B1.tab(x, y) == 0) {
						T06 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T06 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					if (B1.tab(x, y) == 0) {
						T07 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T07 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 1:
				switch (y)
				{
				case 0:
					if (B1.tab(x, y) == 0) {
						T10 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T10 = _T("X");
						B1.cont();
					}

					break;
				case 1:
					if (B1.tab(x, y) == 0) {
						T11 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T11 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					if (B1.tab(x, y) == 0) {
						T12 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T12 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					if (B1.tab(x, y) == 0) {
						T13 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T13 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					if (B1.tab(x, y) == 0) {
						T14 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T14 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					if (B1.tab(x, y) == 0) {
						T15 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T15 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					if (B1.tab(x, y) == 0) {
						T16 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T16 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					if (B1.tab(x, y) == 0) {
						T17 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T17 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 2:
				switch (y)
				{
				case 0:

					if (B1.tab(x, y) == 0) {
						T20 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T20 = _T("X");
						B1.cont();
					}


					break;
				case 1:
					
					


					if (B1.tab(x, y) == 0) {
						T21 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T21 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					
					////(IDC_BUTTON20)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T22 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T22 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					//(IDC_EDIT18)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON21)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T23 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T23 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					//(IDC_EDIT19)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON22)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T24 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T24 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					//(IDC_EDIT20)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON23)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T25 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T25 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					//(IDC_EDIT21)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON24)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T26 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T26 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					//(IDC_EDIT118)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON25)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T27 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T27 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 3:
				switch (y)
				{
				case 0:

					//(IDC_EDIT22)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON26)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T30 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T30 = _T("X");
						B1.cont();
					}


					break;
				case 1:
					//(IDC_EDIT23)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON27)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T31 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T31 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					//(IDC_EDIT24)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON28)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T32 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T32 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					//(IDC_EDIT25)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON29)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T33 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T33 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					//(IDC_EDIT26)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON30)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T34 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T34 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					//(IDC_EDIT27)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON31)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T35 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T35 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					//(IDC_EDIT28)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON32)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T36 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T36 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					//(IDC_EDIT119)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON33)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T37 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T37 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 4:
				switch (y)
				{
				case 0:

					//(IDC_EDIT29)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON34)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T40 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T40 = _T("X");
						B1.cont();
					}

					break;
				case 1:
					//(IDC_EDIT30)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON35)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T41 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T41 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					//(IDC_EDIT31)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON36)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T42 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T42 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					//(IDC_EDIT32)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON37)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T43 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T43 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					//(IDC_EDIT33)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON38)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T44 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T44 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					//(IDC_EDIT34)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON39)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T45 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T45 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					//(IDC_EDIT35)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON40)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T46 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T46 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					//(IDC_EDIT120)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON41)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T47 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T47 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 5:
				switch (y)
				{
				case 0:

					//(IDC_EDIT36)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON42)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T50 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T50 = _T("X");
						B1.cont();
					}

					break;
				case 1:
					//(IDC_EDIT37)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON43)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T51 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T51 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					//(IDC_EDIT38)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON44)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T52 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T52 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					//(IDC_EDIT39)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON45)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T53 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T53 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					//(IDC_EDIT40)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON46)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T54 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T54 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					//(IDC_EDIT41)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON47)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T55 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T55 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					//(IDC_EDIT42)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON48)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T56 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T56 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					//(IDC_EDIT121)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON49)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T57 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T57 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 6:
				switch (y)
				{
				case 0:

					//(IDC_EDIT43)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON50)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T60 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T60 = _T("X");
						B1.cont();
					}

					break;
				case 1:
					//(IDC_EDIT44)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON51)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T61 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T61 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					//(IDC_EDIT45)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON52)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T62 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T62 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					//(IDC_EDIT46)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON53)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T63 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T63 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					//(IDC_EDIT47)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON54)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T64 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T64 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					//(IDC_EDIT48)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON55)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T65 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T65 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					//(IDC_EDIT49)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON56)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T66 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T66 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					//(IDC_EDIT122)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON57)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T67 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T67 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			case 7:
				switch (y)
				{
				case 0:

					//(IDC_EDIT101)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON58)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T70 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T70 = _T("X");
						B1.cont();
					}

					break;
				case 1:
					//(IDC_EDIT102)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON59)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T71 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T71 = _T("X");
						B1.cont();
					}
					break;
				case 2:
					//(IDC_EDIT103)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON60)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T72 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T72 = _T("X");
						B1.cont();
					}
					break;
				case 3:
					//(IDC_EDIT104)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON61)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T73 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T73 = _T("X");
						B1.cont();
					}
					break;
				case 4:
					//(IDC_EDIT105)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON62)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T74 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T74 = _T("X");
						B1.cont();
					}
					break;
				case 5:
					//(IDC_EDIT106)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON63)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T75 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T75 = _T("X");
						B1.cont();
					}
					break;
				case 6:
					//(IDC_EDIT107)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON64)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T76 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T76 = _T("X");
						B1.cont();
					}
					break;
				case 7:
					//(IDC_EDIT123)->ShowWindow(SW_SHOW);
					//(IDC_BUTTON65)->ShowWindow(SW_HIDE);


					if (B1.tab(x, y) == 0) {
						T77 = _T("///");
					}
					else if (B1.tab(x, y) == 1) {
						T77 = _T("X");
						B1.cont();
					}
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}
		}
	}
	UpdateData(false);
}


void CBatallaNavalCDlg::OnBnClickedButton1()
{
	UpdateData();
	posx = 0;
	posy = 0;
	UpdateData(false);
}


void CBatallaNavalCDlg::OnBnClickedButton2()
{
	UpdateData();
	posx = 0;
	posy = 1;
	UpdateData(false);
}


void CBatallaNavalCDlg::OnBnClickedButton4()
{
	UpdateData();
	posx = 0;
	posy = 2;
	UpdateData(false);
}


void CBatallaNavalCDlg::OnBnClickedButton5()
{
	UpdateData();
	posx = 0;
	posy = 3;
	UpdateData(false);
}


void CBatallaNavalCDlg::OnBnClickedButton6()
{
	UpdateData();
	posx = 0;
	posy = 4;
	UpdateData(false);
}


void CBatallaNavalCDlg::OnBnClickedButton7()
{
	UpdateData();
	posx = 0;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton8()
{
	UpdateData();
	posx = 0;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton9()
{
	UpdateData();
	posx = 0;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton10()
{
	UpdateData();
	posx = 1;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton11()
{
	UpdateData();
	posx = 1;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton12()
{
	UpdateData();
	posx = 1;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton13()
{
	UpdateData();
	posx = 1;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton14()
{
	UpdateData();
	posx = 1;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton15()
{
	UpdateData();
	posx = 1;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton16()
{
	UpdateData();
	posx = 1;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton17()
{
	UpdateData();
	posx = 1;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton18()
{
	UpdateData();
	posx = 2;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton19()
{
	UpdateData();
	posx = 2;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton20()
{
	UpdateData();
	posx = 2;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton21()
{
	UpdateData();
	posx = 2;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton22()
{
	UpdateData();
	posx = 2;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton23()
{
	UpdateData();
	posx = 2;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton24()
{
	UpdateData();
	posx = 2;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton25()
{
	UpdateData();
	posx = 2;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton26()
{
	UpdateData();
	posx = 3;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton27()
{
	UpdateData();
	posx = 3;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton28()
{
	UpdateData();
	posx = 3;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton29()
{
	UpdateData();
	posx = 3;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton30()
{
	UpdateData();
	posx = 3;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton31()
{
	UpdateData();
	posx = 3;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton32()
{
	UpdateData();
	posx = 3;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton33()
{
	UpdateData();
	posx = 3;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton34()
{
	UpdateData();
	posx = 4;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton35()
{
	UpdateData();
	posx = 4;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton36()
{
	UpdateData();
	posx = 4;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton37()
{
	UpdateData();
	posx = 4;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton38()
{
	UpdateData();
	posx = 4;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton39()
{
	UpdateData();
	posx = 4;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton40()
{
	UpdateData();
	posx = 4;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton41()
{
	UpdateData();
	posx = 4;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton42()
{
	UpdateData();
	posx = 5;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton43()
{
	UpdateData();
	posx = 5;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton44()
{
	UpdateData();
	posx = 5;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton45()
{
	UpdateData();
	posx = 5;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton46()
{
	UpdateData();
	posx = 5;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton47()
{
	UpdateData();
	posx = 5;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton48()
{
	UpdateData();
	posx = 5;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton49()
{
	UpdateData();
	posx = 5;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton50()
{
	UpdateData();
	posx = 6;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton51()
{
	UpdateData();
	posx = 6;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton52()
{
	UpdateData();
	posx = 6;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton53()
{
	UpdateData();
	posx = 6;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton54()
{
	UpdateData();
	posx = 6;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton55()
{
	UpdateData();
	posx = 6;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton56()
{
	UpdateData();
	posx = 6;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton57()
{
	UpdateData();
	posx = 6;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton58()
{
	UpdateData();
	posx = 7;
	posy = 0;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton59()
{
	UpdateData();
	posx = 7;
	posy = 1;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton60()
{
	UpdateData();
	posx = 7;
	posy = 2;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton61()
{
	UpdateData();
	posx = 7;
	posy = 3;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton62()
{
	UpdateData();
	posx = 7;
	posy = 4;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton63()
{
	UpdateData();
	posx = 7;
	posy = 5;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton64()
{
	UpdateData();
	posx = 7;
	posy = 6;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void CBatallaNavalCDlg::OnBnClickedButton65()
{
	UpdateData();
	posx = 7;
	posy = 7;
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}

