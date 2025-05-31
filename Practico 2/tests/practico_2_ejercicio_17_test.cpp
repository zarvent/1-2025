#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_17(4);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "2 3 5 7 ");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_17(2);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "2 3 ");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_17(10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "2 3 5 7 11 13 17 19 23 29 ");
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_17(0);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "");
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_17(30);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 ");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}