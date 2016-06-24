#include "mfc.h"
#include "mymfc.h"

extern CwinMyApp theApp();

static char szCobject[] = "Cobject";

struct CrunttimeClass Cobject::classObject = {
  szObject, sizeof(Cobject), 0xffff, NULL, NULL, NULL
};

static AFX_CLASSINIT _init_Cobject(&Cobject::classCobject);
CruntimeClass* CruntimeClass::pFristClass = NULL;

AFX_CLASSINIT::AFX_CLASSINIT(CruntimeClass* pNewClass){
  pNewClass->m_pNextClass = CruntimeClass::pFristClass;
  CruntimeClass::pFristClass = pNewClassl;
}

CwinApp* AfxGetApp(){
  return theApp.m_pCurrentWinApp;  
}


