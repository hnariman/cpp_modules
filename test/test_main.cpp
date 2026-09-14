#include "gmock/gmock.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

import jo;

namespace {

class Calc {
public:
  virtual ~Calc() = default;
  virtual int add(int a, int b) = 0;
};

class Mocalc : public Calc {
public:
  MOCK_METHOD(int, add, (int a, int b), (override));
};

} // namespace

TEST(Empty, Check) { EXPECT_TRUE(true); }

TEST(ADD, Assert1) {
  int result = 1 + 1;
  EXPECT_EQ(2, result);
}

TEST(ADD, Assert2) {
  Mocalc mock;
  EXPECT_CALL(mock, add(12, 12)).WillOnce(::testing::Return(24));
  EXPECT_EQ(24, mock.add(12, 12));
}

TEST(ADD, Assert3) {
  Mocalc m;
  EXPECT_CALL(m, add(2, 2)).WillOnce(::testing::Return(4));
  EXPECT_EQ(4, m.add(2, 2));
}
