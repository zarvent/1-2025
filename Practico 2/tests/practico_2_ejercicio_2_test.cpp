#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample) {
  testing::internal::CaptureStdout();

  exercise_2("green parrot");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "[green]\n[parrot]\n");
}

TEST(Test2, TestThreeStrings) {
  testing::internal::CaptureStdout();

  exercise_2("green parrot dog");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "[green]\n[parrot]\n[dog]\n");
}

TEST(Test3, TestOnlyChars) {
  testing::internal::CaptureStdout();

  exercise_2("t a c d");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "[t]\n[a]\n[c]\n[d]\n");
}

TEST(Test3, TestOneChars) {
  testing::internal::CaptureStdout();

  exercise_2("t");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "[t]\n");
}

TEST(Test4, TestOneLongString) {
  testing::internal::CaptureStdout();

  exercise_2("treeeeeeeeee");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "[treeeeeeeeee]\n");
}

TEST(Test5, TestEmptyString) {
  testing::internal::CaptureStdout();

  exercise_2("");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}