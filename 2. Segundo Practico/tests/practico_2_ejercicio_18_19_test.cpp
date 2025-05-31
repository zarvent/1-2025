#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_18_19(1, 7);

  std::string expected =
      "1->1\n\
2->2\n\
3->12\n\
4->3\n\
5->4\n\
6->10\n\
7->11\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_18_19(99, 100);

  std::string expected =
      "99->18\n\
100->17\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_18_19(-1, 2);

  std::string expected =
      "El numero debe de ser positivo y mayor a zero\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_18_19(2, 1);

  std::string expected =
      "El numero de fin no debe de ser menor al inicial\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_18_19(0, 10);

  std::string expected =
      "El numero debe de ser positivo y mayor a zero\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test6, TestExample6) {
  testing::internal::CaptureStdout();

  exercise_18_19(10, -10);

  std::string expected =
      "El numero de fin no debe de ser menor al inicial\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test7, TestExample7) {
  testing::internal::CaptureStdout();

  exercise_18_19(1, 1);

  std::string expected =
      "1->1\n";

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();

  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}