#include <iostream>
#include <cstdint>

int main()
{
  int32_t a = 5, b = 15;
  int32_t pa = a, pb = b, temp;

  temp = *pa;
  *pa = *pb;
  *pb = temp;

  std::cout << "O valor de <A>: " << a << std::endl;
  std::cout  << "O valor de <B>: " << b << std::endl;

  return 0;
}
