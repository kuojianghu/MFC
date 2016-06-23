#ifndef MY_H__
#define MY_H__

#include "mfc.h"
#include <iostream>

class CmyWinApp : public CwinApp{
public:
  ~CmyWinApp(){}
  CmyWinApp(){}
};

class CmyFrameWnd : public CframeWnd{
public:
  ~CmyFrameWnd(){}
  CmyFrameWnd(){
    Create();
  }
public:
  virtual bool InitInstance(){
    m_pMianWnd = new CmyFrameWnd;
    return true;
  }
};

#endif
