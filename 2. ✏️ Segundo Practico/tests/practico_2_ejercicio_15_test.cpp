#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_15(10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "1010\n");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_15(101);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "1100101\n");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_15(29);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "11101\n");
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_15(0);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "0\n");
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_15(1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "1\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}