#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  const auto expected = "Es palindrome";
  const auto actual = exercise_14(212);
  ASSERT_EQ(actual, expected);
}

TEST(Test2, TestExample2) {
  const auto expected = "No es palindrome";
  const auto actual = exercise_14(2121);
  ASSERT_EQ(actual, expected);
}

TEST(Test3, TestExample3) {
  const auto expected = "Es palindrome";
  const auto actual = exercise_14(0);
  ASSERT_EQ(actual, expected);
}

TEST(Test4, TestExample4) {
  const auto expected = "No es palindrome";
  const auto actual = exercise_14(01111102);
  ASSERT_EQ(actual, expected);
}

TEST(Test5, TestExample5) {
  const auto expected = "No es palindrome";
  const auto actual = exercise_14(011111112223);
  ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}