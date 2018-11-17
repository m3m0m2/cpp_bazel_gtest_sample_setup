#ifndef INCLUDE_CBUFFER_MOCK_HPP
#define INCLUDE_CBUFFER_MOCK_HPP

#include "mylib/icbuffer.hpp"
#include "gmock/gmock.h"


class CBufferMock : public mylib::ICBuffer
{
public:
  MOCK_CONST_METHOD0(capacity, int());
  MOCK_CONST_METHOD0(size, int());
  MOCK_METHOD1(add,void(int value));
  MOCK_CONST_METHOD1(get, int(int idx));
};


#endif
