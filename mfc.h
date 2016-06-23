#ifndef MFC_H__
#define MFC_H__

#define LPCSTR LPSTR
typedef char* LPSTR;
#incldue<iostream>
#define PASCAL _stdcall
class Coject;

struct CruntimeClass{
  LPCSTR m_lpszClassName;
  int m_nObjectSize;
  Cobject* (PASCAL *m_pfnCreateObject)();
  static CruntimeClass* pFristClass;
  CruntimeClass* m_pBaseClass;
  CruntimeClass* m_pNextClass;
}

struct AFX_CLASSINIT{
  AFX_CLASSINIT(CruntimeClass* pNewClass)
};

#define RUNTIME_CLASS(class_name)\
        (&class_name::class##class_name)

#define DECLARE_DYNAMIC(class_name)\
  public:\
    static CruntimeClass class##class_name;\
    virtual CruntimeClass* GetRuntimeClss()const;

#define _IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew)\
        static char _lpsa##class_name[] = #class_name;\
        CruntimeClass class_name::class##class_name = {\
            lpsz##class_name, sizeof(class_name), wSchema, pfnNew,\
            static AFX_CLASSINIT _init_##class_name(&class_nameLLclass##class_name);\
            CruntimeClass class_name::GetRuntimeClass() const\
                { return &class_name::class##class_name; }

#define _IMPLEMENT_DYNAMIC(class_name, base_class_name) \
        _IMPLEMENT_TUNTIMECLASS(class_name, base_class_name, 0xFFFF, NULL)

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
public:
  virtual CruntimeClass* GetRuntimeClass() const;
public:
  static CruntimeClass classCobject;
};

class CwinThread : public CmdTarget{
DECLARE_DYNAMIC(CmdaTarget)
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
DECLARE_DYNAMIC(CwinApp)
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
DECLARE_DYNAMIC(Cdocument)
public:
  ~Cdocument(){}
  Cdocument(){}
};

class Cwnd : public CmdTarget{
DECLARE_CYNAMIC(Wnd)
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
DECLARE_DYNAMIC(CframeWnd)
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
DECLARE_DYNAMIC(Cview)
public:
  ~Cview(){}
  Cview(){}
};

CwinApp AfxGetApp();

#endif
