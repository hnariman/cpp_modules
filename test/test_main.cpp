#include <gmock/gmock.h>
#include <gtest/gtest.h>

import jo;

int add(int a, int b) { return a + b; }

TEST(Empty, Check) { EXPECT_TRUE(true); }

TEST(ADD, Assert1) {
  int result = 1 + 1;
  EXPECT_EQ(result, 2);
}

TEST(ADD, Assert2) {
  int result = add(12, 12);
  EXPECT_EQ(result, 24);
}

TEST(ADD, Assert3) { EXPECT_EQ(add(12, 12), 24); }
