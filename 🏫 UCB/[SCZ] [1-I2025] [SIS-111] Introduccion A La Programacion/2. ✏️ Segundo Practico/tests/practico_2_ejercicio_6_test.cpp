#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  const auto expected = 14;
  const auto actual = exercise_6(59);

  ASSERT_EQ(actual, expected);
}

TEST(Test2, TestExample2) {
  const auto expected = 3;
  const auto actual = exercise_6(111);

  ASSERT_EQ(actual, expected);
}

TEST(Test3, TestExample3) {
  const auto expected = 4;
  const auto actual = exercise_6(211);

  ASSERT_EQ(actual, expected);
}

TEST(Test4, TestExample4) {
  const auto expected = 5;
  const auto actual = exercise_6(122);

  ASSERT_EQ(actual, expected);
}

TEST(Test5, TestExample5) {
  const auto expected = 0;
  const auto actual = exercise_6(-11);

  ASSERT_EQ(actual, expected);
}

TEST(Test6, TestExample6) {
  const auto expected = 3;
  const auto actual = exercise_6(3);

  ASSERT_EQ(actual, expected);
}

TEST(Test7, TestExample7) {
  const auto expected = 0;
  const auto actual = exercise_6(0);

  ASSERT_EQ(actual, expected);
}

TEST(Test8, TestExample8) {
  const auto expected = 15;
  const auto actual = exercise_6(12345);

  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}