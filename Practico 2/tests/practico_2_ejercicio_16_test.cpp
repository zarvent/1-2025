#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_16(15, 5);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "3 0\n");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_16(30, 5);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "6 0\n");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_16(30, 0);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "");
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_16(0, 100);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "0 0\n");
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_16(13, 2);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "6 1\n");
}

TEST(Test6, TestExample6) {
  testing::internal::CaptureStdout();

  exercise_16(15, 15);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "1 0\n");
}

TEST(Test7, TestExample7) {
  testing::internal::CaptureStdout();

  exercise_16(10, 200);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "0 10\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}