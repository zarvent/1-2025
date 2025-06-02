#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  const auto expected = 55;
  const auto actual = exercise_13(5, 2);
  ASSERT_EQ(actual, expected);
}

TEST(Test2, TestExample2) {
  const auto expected = 0;
  const auto actual = exercise_13(0, 2);
  ASSERT_EQ(actual, expected);
}

TEST(Test3, TestExample3) {
  const auto expected = 14;
  const auto actual = exercise_13(3, 2);
  ASSERT_EQ(actual, expected);
}

TEST(Test4, TestExample4) {
  const auto expected = 100;
  const auto actual = exercise_13(4, 3);
  ASSERT_EQ(actual, expected);
}

TEST(Test5, TestExample5) {
  const auto expected = 15;
  const auto actual = exercise_13(5, 1);
  ASSERT_EQ(actual, expected);
}

TEST(Test6, TestExample6) {
  const auto expected = 1;
  const auto actual = exercise_13(1, 1);
  ASSERT_EQ(actual, expected);
}

TEST(Test7, TestExample7) {
  const auto expected = 5050;
  const auto actual = exercise_13(100, 1);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}