
// BatallaNavalC.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'pch.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// CBatallaNavalCApp:
// Consulte BatallaNavalC.cpp para obtener información sobre la implementación de esta clase
//

class CBatallaNavalCApp : public CWinApp
{
public:
	CBatallaNavalCApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern CBatallaNavalCApp theApp;
