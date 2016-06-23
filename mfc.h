#ifndef MFC_H__
#define MFC_H__

#incldue<iostream>

/*define the base of class mfc of object*/

class Object{
  public:
    ~Object(){}
  protected:
    Object(){}
};

class CmdTarget : public Cobject{
public:
  ~CmdTarget(){}
  CmdTarget(){}
};

class CwinThread : public CmdTarget{
public:
  ~CwinThread(){}
  CWinThread(){}
};

class CwinApp : public CwinThread{
public:
  ~CwinApp(){ };
  CwinApp(){
    m_pCurrentWinApp = this;
  }
private:
  CwinApp *m_pCurrentWinApp;
};

class Cdocument : public CmdTarget{
public:
  ~Cdocument(){}
  Cdocument(){}
};

class Cwnd : public CmdTarget{
public:
  ~Cwnd(){}
  Cwnd(){}
};

class CframeWnd : public Cwnd{
public:
  ~CframeWnd(){}
  CframeWnd(){}
};

class Cview : public Cwnd{
public:
  ~Cview(){}
  Cview(){}
};

CwinApp AfxGetApp();

#endif
