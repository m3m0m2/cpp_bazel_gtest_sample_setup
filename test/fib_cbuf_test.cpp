#include "mylib/fib_cbuf.hpp"
#include "test/cbuffer_mock.hpp"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::InSequence;
using namespace mylib;

TEST(fib_cbuf_test,calc)
{
  CBufferMock buf;

  {
    InSequence seq;

    EXPECT_CALL(buf,add(1));
    EXPECT_CALL(buf,add(1));
    EXPECT_CALL(buf,add(2));
    EXPECT_CALL(buf,add(3));
  }

  calc_fib_cbuf(4, &buf);
}
