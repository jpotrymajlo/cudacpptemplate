#include "liba/liba.h"
#include "libmycuda/libmycuda.hpp"
#include <iostream>

int main() {
  auto a = A{}; 
  auto b = A{};
  a = b;
  int data[] = {1, 2, 3, 4, 5};
  std::cout<<"1: "<<data[0]<<std::endl;
  int size = sizeof(data) / sizeof(data[0]);

  addOne(data, size);
  std::cout<<"1: "<<data[0]<<std::endl;
  return 0;
}
