#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample) {
  testing::internal::CaptureStdout();

  exercise_7(2);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "0.5\n");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_7(3);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "0.833333\n");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_7(10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "0.645635\n");
}  // 688172

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_7(100);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "0.688172\n");
}

TEST(Test6, TestExample6) {
  testing::internal::CaptureStdout();

  exercise_7(1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "1\n");
}

TEST(Test7, TestExample7) {
  testing::internal::CaptureStdout();

  exercise_7(0);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "0\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}