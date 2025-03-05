#include <iostream>
#include "mathlib.h"


// If parameter is not true, test fails
// This check function would be provided by the test framework
#define IS_TRUE(x) { if (!(x)) std::cout << __FUNCTION__ << " failed on line " << __LINE__ << std::endl; }

void test(){
  Mathlib math;
  IS_TRUE(1 == 1);
  IS_TRUE(math.add(1,1)==2);
  IS_TRUE(math.add(1,-1)==0);
  IS_TRUE(math.add(-1,-1)==-2);
  IS_TRUE(math.subtract(1,1)==0);
  IS_TRUE(math.subtract(1,-1)==2);
  IS_TRUE(math.subtract(-1,-1)==0);
  IS_TRUE(math.multiply(5,4)==20);
  IS_TRUE(math.multiply(-1,10)==-10);
  IS_TRUE(math.multiply(-1,-1)==1);
}

int main() {
  test();
  std::cout << "Hello, World!" << std::endl;
  return 0;
}

