#include <iostream>

using namespace std;

// Variáveis globais
int n, fat;
char resp;

// Função de entrada
void entrada(void)
{
    cout << "Entre o valor para fatorial sequencial: ";
    cin >> n;
}

// Função que calcula o fatorial
int fatorial(int num)
{
    int i, resultado = 1;

    for(i = 1; i <= num; i++)
    {
        resultado *= i;
    }

    return resultado;
}

// Função de saída
void saida(void)
{
    cout << "Fatorial: " << fat << endl;
}

// Função principal do laço
void laco(void)
{
    for(resp = 'S'; resp == 'S' || resp == 's';)
    {
        entrada();

        fat = fatorial(n);

        saida();

        cout << "Gostaria de continuar? ";
        cin >> resp;

        cout << endl;
    }
}

int main(void)
{
    laco();

    cout << "Obrigado por participar do Programa fatorial!!!" << endl;

    return 0;
}
