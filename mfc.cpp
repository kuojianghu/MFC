#include "mfc.h"
#include "mymfc.h"

extern CwinMyApp theApp();

CwinApp* AfxGetApp(){
  return theApp.m_pCurrentWinApp;  
}


