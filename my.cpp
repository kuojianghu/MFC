#include "my.h"
#include <iostream>

CMyWinApp theApp;

int mian(){
  CwinApp* pApp = AfxGetApp();
  pApp->InitApplication();
  pApp->InitInstance();
  pApp->run();
  return 0;
}
