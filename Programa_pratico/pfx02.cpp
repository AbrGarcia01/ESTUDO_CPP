/*
Crie um programa com:

int32_t a = 10;
um ponteiro apontando para a

Depois:

peça um valor ao usuário
atribua esse valor usando o ponteiro (*p = ...)
imprima o valor de a
*/

#include <iostream>
#include <cstdint>

int main()
{
  int32_t a = 10, *pa = &a;

  std::cout << "O valor de a: " << a << std::endl;
  std::cout << "Entre um valor: "; cin >> *p;
  std::cout << std::endl;
  std::cout << "Valor apontado: " << a << std::endl;

  return 0;
}
