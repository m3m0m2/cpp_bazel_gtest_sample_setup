#include "mylib/message.hpp"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(message_test,content)
{
  EXPECT_EQ(mylib::get_message(),"Hello World!");
}
