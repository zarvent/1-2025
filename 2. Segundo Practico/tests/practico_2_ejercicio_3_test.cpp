#include <practico_2_ejercicios.h>
#include <gtest/gtest.h>

TEST(Test1, Ejemplo1) {
  testing::internal::CaptureStdout();
  std::string esperado =
      "Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n";

  ejercicio_3("1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, esperado);
}

TEST(Test2, Ejemplo2) {
  testing::internal::CaptureStdout();
  std::string esperado =
      "Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
No cake :(\n";

  ejercicio_3("1 1 1 0 0 0 0 0 1 1");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, esperado);
}

TEST(Test3, Ejemplo3) {
  testing::internal::CaptureStdout();
  std::string esperado =
      "No cake :(\n";

  ejercicio_3("0");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, esperado);
}

TEST(Test4, Ejemplo4) {
  testing::internal::CaptureStdout();
  std::string esperado =
      "Om-nom-nom :P\n";

  ejercicio_3("1");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, esperado);
}

TEST(Test5, Ejemplo5) {
  testing::internal::CaptureStdout();
  std::string esperado =
      "No cake :(\n";

  ejercicio_3("0 1 1 1 1 1 1 1 1 1");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, esperado);
}

TEST(Test6, Ejemplo6) {
  testing::internal::CaptureStdout();
  std::string esperado =
      "";

  ejercicio_3("");

  std::string TU_SALIDA = testing::internal::GetCapturedStdout();
  ASSERT_EQ(TU_SALIDA, esperado);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}