#include <iostream>

using namespace std;

const int MAX = 100;

// Verifica se o ID já existe
bool idExiste(int ids[], int tamanho, int id)
{
    for(int i = 0; i <= tamanho; i++)
    {
        if(ids[i] == id)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int ids[MAX];
    int quantidade = 0;
    int id;
    char resp;

    do
    {
        cout << "Digite um ID: ";
        cin >> id;

        // Validação da chave primária
        if(idExiste(ids, quantidade, id))
        {
            cout << "ERRO: chave primaria duplicada!\n";
        }
        else
        {
            ids[quantidade] = id;
            quantidade++;

            cout << "ID cadastrado com sucesso!\n";
        }

        cout << "\nContinuar? (S/N): ";
        cin >> resp;

        cout << endl;

    } while(resp == 'S' || resp == 's');

    // Mostrar IDs cadastrados
    cout << "\nIDs cadastrados:\n";

    for(int i = 0; i < quantidade; i++)
    {
        cout << ids[i] << endl;
    }

    return 0;
}
