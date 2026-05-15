#include <iostream>
#include <limits>
using namespace std;

void Soma(int x, int y, int &soma)
{
  soma = x + y;
}

void Subtracao(int x, int y, int &subtracao)
{
    /* if(x < y)
    {
        int troca = x;
        x = y;
        y = troca;
        subtracao = x - y;
    } else
    */ 
        subtracao = x - y;
}

void Multiplicacao(int x, int y, int &multiplicacao)
{
    multiplicacao = x * y;
}

void Divisao (int x, int y, int &divisao)
{
    if(y == 0)
        divisao = 0;
    else
        divisao = x / y;
}

int main(void)
{
  int x, y, resultado;

  cout << "Entre o valor de x: "; cin >> x;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Entre o valor de y: "; cin >> y;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  Soma(x, y, resultado);
  cout << "A soma de " << x << " + " << y << " = " << resultado << endl;
  
  Subtracao(x, y, resultado);
  cout << "A subtracao de " << x << " - " << y << " = " << resultado << endl;
  
  Multiplicacao(x, y, resultado);
  cout << "A multiplicacao de " << x << " * " << y << " = " << resultado << endl;
  
  Divisao(x, y, resultado);
  cout << "A divisao de " << x << " / " << y << " = " << resultado << endl;

  return 0;
}
