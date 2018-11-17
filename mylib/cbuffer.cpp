#include "mylib/cbuffer.hpp"
#include <cassert>

namespace mylib
{

  CBuffer::CBuffer(int c):_capacity(c),_size(0),_start(0)
  {
    _data = new int[_capacity];
  }
  
  CBuffer::~CBuffer()
  {
    delete _data;
  }
  
  int CBuffer::capacity() const
  {
    return _capacity;
  }
  
  int CBuffer::size() const
  {
    return _size;
  }
  
  void CBuffer::add(int value)
  {
    _data[(_start+_size)%_capacity]=value;
  
    if(_size<_capacity)
      _size++;
    else
      _start=(_start+1)%_capacity;
  }
  
  int CBuffer::get(int idx) const
  {
    assert(idx<_size);
    return _data[(_start+idx)%_capacity];
  }

}

