
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_WeakIdentityHashMap$WeakEntrySet__
#define __gnu_java_util_WeakIdentityHashMap$WeakEntrySet__

#pragma interface

#include <java/util/AbstractSet.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
          class WeakIdentityHashMap;
          class WeakIdentityHashMap$WeakEntrySet;
      }
    }
  }
}

class gnu::java::util::WeakIdentityHashMap$WeakEntrySet : public ::java::util::AbstractSet
{

public: // actually package-private
  WeakIdentityHashMap$WeakEntrySet(::gnu::java::util::WeakIdentityHashMap *);
public:
  jint size();
  ::java::util::Iterator * iterator();
public: // actually package-private
  static ::gnu::java::util::WeakIdentityHashMap * access$0(::gnu::java::util::WeakIdentityHashMap$WeakEntrySet *);
  ::gnu::java::util::WeakIdentityHashMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_WeakIdentityHashMap$WeakEntrySet__