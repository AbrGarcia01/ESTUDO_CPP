/*
Crie um programa que:

declare uma variável int32_t valor = 50;
declare um ponteiro int32_t *p = &valor;

Depois, imprima:

o valor da variável
o endereço da variável
o valor do ponteiro
o valor apontado pelo ponteiro
*/

#include <iostream>
#include <cstdint> // para compiladores com versoes c++ menos atuais

int main()
{
  int32_t valor = 50, *p = &valor;

  std::cout << "Valor da variavel: " << valor << std::endl;
  std::cout << "Valor apontado: " << *p << std::endl;
  std::cout << "Valor da memoria de ponteiro " << p << std::endl;
  std::cout << "Valor da memoria da variavel: " << &p << std::endl;

  return 0;
  
}
