
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtContainerPeer__
#define __gnu_java_awt_peer_qt_QtContainerPeer__

#pragma interface

#include <gnu/java/awt/peer/qt/QtComponentPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtContainerPeer;
              class QtToolkit;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Component;
        class Insets;
    }
  }
}

class gnu::java::awt::peer::qt::QtContainerPeer : public ::gnu::java::awt::peer::qt::QtComponentPeer
{

public:
  QtContainerPeer(::gnu::java::awt::peer::qt::QtToolkit *, ::java::awt::Component *);
public: // actually protected
  virtual void init();
  virtual void setup();
public:
  virtual void beginLayout();
  virtual void beginValidate();
  virtual void endLayout();
  virtual void endValidate();
  virtual ::java::awt::Insets * getInsets();
  virtual ::java::awt::Insets * insets();
  virtual jboolean isPaintPending();
  virtual jboolean isRestackSupported();
  virtual void cancelPendingPaint(jint, jint, jint, jint);
  virtual void restack();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtContainerPeer__
