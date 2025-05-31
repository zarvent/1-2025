#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, Ejemplo1) {
  testing::internal::CaptureStdout();

  ejercicio_9("comfort");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "-1\n");
}

TEST(Test2, Ejemplo2) {
  testing::internal::CaptureStdout();

  ejercicio_9("coffe");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "3\n");
}

TEST(Test3, Ejemplo3) {
  testing::internal::CaptureStdout();

  ejercicio_9("car");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "-2\n");
}

TEST(Test4, Ejemplo4) {
  testing::internal::CaptureStdout();

  ejercicio_9("");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "-2\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}