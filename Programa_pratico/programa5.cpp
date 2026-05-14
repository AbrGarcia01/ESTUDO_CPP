#include <iostream>
#include <cstdint>
#include <iomanip>

using namespace std;

// Função de saída
void saida(int32_t Valor1, int32_t Valor2)
{
    cout << "Valor 1: " << Valor1 << endl;
    cout << "Valor 2: " << Valor2 << endl;
}

// Função de cálculo
void calculo(int32_t &X, int32_t &Y)
{
    int16_t R1, R2;

    R1 = X % 2;
    R2 = Y % 2;

    if(R1 == 0 && R2 == 0)
    {
        if(X < Y)
        {
            int16_t Z = X;
            X = Y;
            Y = Z;

            X = X * X;
            Y = X * Y;
        }
        else
        {
            Y = Y * Y;
            X = (X * Y) / X;
        }
    }
    else
    {
        X = (X + Y) * 10;
        Y = (Y - X) * 10;
    }
}

// Entrada dos valores
void EntradaValor()
{
    int32_t Valor1, Valor2;

    cout << "Entre o primeiro valor: ";
    cin >> Valor1;

    cout << "Entre o segundo valor: ";
    cin >> Valor2;

    calculo(Valor1, Valor2);

    saida(Valor1, Valor2);
}

int main(void)
{
    cout << "SEJA BEM-VINDO AO PROGRAMA" << endl;

    EntradaValor();

    return 0;
}
