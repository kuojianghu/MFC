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
