#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  const auto expected = 1;
  const auto actual = exercise_10(25, 27);
  ASSERT_EQ(actual, expected);
}

TEST(Test2, TestExample2) {
  const auto expected = 4;
  const auto actual = exercise_10(12, 16);
  ASSERT_EQ(actual, expected);
}

TEST(Test3, TestExample3) {
  const auto expected = 13;
  const auto actual = exercise_10(13, 13);
  ASSERT_EQ(actual, expected);
}

TEST(Test4, TestExample4) {
  const auto expected = 5;
  const auto actual = exercise_10(0, 5);
  ASSERT_EQ(actual, expected);
}

TEST(Test5, TestExample5) {
  const auto expected = 10;
  const auto actual = exercise_10(10, 0);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}