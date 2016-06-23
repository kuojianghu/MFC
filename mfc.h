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
public:
  virtual bool InitInstance(){
    return true;
  }
  virtual bool run(){
    return true;
  }
};

class Cwnd;

class CwinApp : public CwinThread{
public:
  ~CwinApp(){ };
  CwinApp(){
    m_pCurrentWinApp = this;
  }
  virtual bool InitAppliation(){
    return true;
  }
  virtual bool InitInstance(){
    return true;
  }
  virtual bool run(){
    return CwinThread::run();
  }
public:
  CwinApp *m_pCurrentWinApp;
  Cwnd* m_pMianWnd;
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
public:
  virtual bool Create(){
    return true;
  }
  virtual bool CreateEx(){
    PreCreateWindow();
    return true;
  }
  virtual bool PreCreateWindow(){
    return true;
  }
};

class CframeWnd : public Cwnd{
public:
  ~CframeWnd(){}
  CframeWnd(){}
public:
  bool Create(){
    CreateEx();
  }
  virtual bool PreCreateWindow(){
    return true;
  }
};

class Cview : public Cwnd{
public:
  ~Cview(){}
  Cview(){}
};

CwinApp AfxGetApp();

#endif
