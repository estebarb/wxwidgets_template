#include <gtest/gtest.h>

TEST(MyTestSuite, ExistingTest1) {
  ASSERT_TRUE(true);
}

TEST(MyTestSuite, ExistingTest2) {
  ASSERT_EQ(2 + 2, 4);
}

TEST(MyTestSuite, MyNewTest) {
  ASSERT_FALSE(false);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}