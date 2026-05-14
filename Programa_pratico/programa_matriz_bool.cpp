#include <iostream>

using namespace std;

const int LIN = 3;
const int COL = 3;

// Função para validar valor único
bool valorExiste(int matriz[LIN][COL], int valor, int linhas, int colunas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
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

                if(valorExiste(matriz, valor, LIN, COL))
                {
                    cout << "Valor repetido! Digite outro.\n";
                }

            } while(valorExiste(matriz, valor, LIN, COL));

            matriz[i][j] = valor;
        }
    }

    // Exibir matriz
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
