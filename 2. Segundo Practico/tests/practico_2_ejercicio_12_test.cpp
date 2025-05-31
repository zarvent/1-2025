#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  std::string expected =
      "U1 = 1 V1 = 1\n\
U2 = 0.5 V2 = 1\n\
U3 = 0.166667 V3 = 1\n\
U4 = 0.0416667 V4 = 1\n\
U5 = 0.00833333 V5 = 1\n\
U6 = 0.00138889 V6 = 1\n\
U7 = 0.000198413 V7 = 1\n\
U8 = 2.48016e-05 V8 = 1\n\
U9 = 2.75573e-06 V9 = 1\n\
U10 = 2.75573e-07 V10 = 1\n";

  exercise_12();

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}