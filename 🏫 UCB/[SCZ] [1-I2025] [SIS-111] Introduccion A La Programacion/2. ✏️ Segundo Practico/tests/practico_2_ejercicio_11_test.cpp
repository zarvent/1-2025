#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  std::string expected =
      "U0 = 1\n\
U1 = 1\n\
U2 = 0.5\n\
U3 = 0.166667\n\
U4 = 0.0416667\n\
U5 = 0.00833333\n\
U6 = 0.00138889\n\
U7 = 0.000198413\n\
U8 = 2.48016e-05\n\
U9 = 2.75573e-06\n\
U10 = 2.75573e-07\n";

  exercise_11();

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}