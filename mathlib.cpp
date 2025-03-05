#include "mathlib.h"

int Mathlib::add(int a, int b) {
  return a + b;
}

int Mathlib::subtract(int a, int b) {
  return a - b;
}

int Mathlib::multiply(int a, int b) {
  int result = a;
  for (int i = 0; i < b; i++){
    result = add(result, a);
  }
  return result;
}


