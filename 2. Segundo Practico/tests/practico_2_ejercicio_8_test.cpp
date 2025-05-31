#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, Ejemplo1) {
  testing::internal::CaptureStdout();

  ejercicio_8("hello world");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "NO\n");
}

TEST(Test2, Ejemplo2) {
  testing::internal::CaptureStdout();

  ejercicio_8("never odd or even");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "YES\n");
}

TEST(Test3, Ejemplo3) {
  testing::internal::CaptureStdout();

  ejercicio_8("Never odd or even");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "NO\n");
}

TEST(Test4, Ejemplo4) {
  testing::internal::CaptureStdout();

  ejercicio_8("");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "YES\n");
}

TEST(Test5, Ejemplo5) {
  testing::internal::CaptureStdout();

  ejercicio_8("aa");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "YES\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}