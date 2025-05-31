#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  std::string expected =
      "                   1\n\
 2  3  4  5  6  7  8\n\
 9 10 11 12 13 14 15\n\
16 17 18 19 20 21 22\n\
23 24 25 26 27 28 29\n\
30 31 \n";

  exercise_5(7, 31);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  std::string expected =
      " 1  2  3  4  5  6  7\n\
 8  9 10 11 12 13 14\n\
15 16 17 18 19 20 21\n\
22 23 24 25 26 27 28\n\
29 30 31 \n";

  exercise_5(1, 31);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  std::string expected =
      "             1  2  3\n\
 4  5  6  7  8  9 10\n\
11 12 13 14 15 16 17\n\
18 19 20 21 22 23 24\n\
25 26 27 28 \n";

  exercise_5(5, 28);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}