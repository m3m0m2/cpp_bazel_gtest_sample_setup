#ifndef INCLUDE_CBUFFER_HPP
#define INCLUDE_CBUFFER_HPP

#include "mylib/icbuffer.hpp"

namespace mylib
{

  class CBuffer : public ICBuffer
  {
  protected:
    int _capacity,
        _size,
        _start;
    int* _data;
  
  public:
    CBuffer(int capacity);
    ~CBuffer();
  
    int capacity() const;
    int size() const;
  
    void add(int value);
    int get(int idx) const;
  };

}
  

#endif
