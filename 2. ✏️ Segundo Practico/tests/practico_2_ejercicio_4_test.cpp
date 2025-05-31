#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, Ejemplo1) {
  testing::internal::CaptureStdout();

  ejercicio_4(5);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "120\n");
}

TEST(Test2, Ejemplo2) {
  testing::internal::CaptureStdout();

  ejercicio_4(1);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "1\n");
}

TEST(Test3, Ejemplo3) {
  testing::internal::CaptureStdout();

  ejercicio_4(10);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "3628800\n");
}

TEST(Test4, Ejemplo4) {
  testing::internal::CaptureStdout();

  ejercicio_4(12);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "479001600\n");
}

TEST(Test5, Ejemplo5) {
  testing::internal::CaptureStdout();

  ejercicio_4(-15);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "El numero es negativo. Intentelo de nuevo\n");
}

TEST(Test6, Ejemplo6) {
  testing::internal::CaptureStdout();

  ejercicio_4(20);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "El numero es muy grande. Intentelo de nuevo\n");
}

TEST(Test7, Ejemplo7) {
  testing::internal::CaptureStdout();

  ejercicio_4(0);

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, "1\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}