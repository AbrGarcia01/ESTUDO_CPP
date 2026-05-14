#include <iostream>

using namespace std;

const int LIN = 3;
const int COL = 3;

// Verifica se o valor já existe
bool valorExiste(int matriz[LIN][COL], int valor, int linhaAtual, int colunaAtual)
{
    for(int i = 0; i <= linhaAtual; i++)
    {
        int limiteColuna;

        // Na linha atual verifica somente até a coluna atual
        if(i == linhaAtual)
            limiteColuna = colunaAtual;
        else
            limiteColuna = COL;

        for(int j = 0; j < limiteColuna; j++)
        {
            if(matriz[i][j] == valor)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int matriz[LIN][COL];
    int valor;

    cout << "Preenchimento da matriz com valores unicos\n\n";

    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            do
            {
                cout << "Digite um valor para ["
                     << i << "][" << j << "]: ";

                cin >> valor;

                if(valorExiste(matriz, valor, i, j))
                {
                    cout << "Valor repetido! Digite outro.\n";
                }

            } while(valorExiste(matriz, valor, i, j));

            matriz[i][j] = valor;
        }
    }

    // Mostrar matriz
    cout << "\nMatriz final:\n\n";

    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}
