#ifndef INCLUDE_ICBUFFER_HPP
#define INCLUDE_ICBUFFER_HPP

namespace mylib
{

  class ICBuffer
  {
  public:
    virtual ~ICBuffer(){};
    virtual int capacity() const = 0;
    virtual int size() const = 0;
    virtual void add(int value) = 0;
    virtual int get(int idx) const = 0;
  };

}
  
#endif
