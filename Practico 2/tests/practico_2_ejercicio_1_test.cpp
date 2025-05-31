#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Exercise1, TestTwoString) {
  testing::internal::CaptureStdout();

  exercise_1("green parrot");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "5\n12\n");
}

TEST(Exercise1, TestOneStrings) {
  testing::internal::CaptureStdout();

  exercise_1("dog");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "3\n");
}

TEST(Exercise1, TestThreeStrings) {
  testing::internal::CaptureStdout();

  exercise_1("fire dog cat");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "4\n8\n12\n");
}

TEST(Exercise1, HandlesLongStrings) {
  testing::internal::CaptureStdout();

  exercise_1("esto es una string muy larga");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  EXPECT_EQ(YOUR_OUTPUT, "4\n7\n11\n18\n22\n28\n");
}

TEST(Exercise1, HandlesEmptyStrings) {
  testing::internal::CaptureStdout();

  exercise_1("");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  EXPECT_EQ(YOUR_OUTPUT, "0\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}