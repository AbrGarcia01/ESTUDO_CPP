#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

// ===================== BANCO =====================

vector<vector<vector<int>>> banco;
vector<int> ids;
vector<string> nomes;

int proximoID = 1;

// ===================== UTIL =====================

bool lerNumero(int &valor)
{
    cin >> valor;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }

    return true;
}

// ===================== BUSCA =====================

int buscarMatriz(int id)
{
    for(int i = 0; i < ids.size(); i++)
    {
        if(ids[i] == id)
            return i;
    }
    return -1;
}

// ===================== CRIAR MATRIZ =====================

void criarMatriz()
{
    int linhas, colunas;
    string nome;

    cout << "Nome da matriz: ";
    cin >> ws;
    getline(cin, nome);

    cout << "Linhas: ";
    while(!lerNumero(linhas) || linhas <= 0)
        cout << "Entrada invalida. Digite numero: ";

    cout << "Colunas: ";
    while(!lerNumero(colunas) || colunas <= 0)
        cout << "Entrada invalida. Digite numero: ";

    vector<vector<int>> matriz(linhas, vector<int>(colunas));

    cout << "\nPreencha apenas com NUMEROS\n";

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            cout << "[" << i << "][" << j << "]: ";

            while(!lerNumero(matriz[i][j]))
            {
                cout << "Valor invalido! Digite numero: ";
            }
        }
    }

    banco.push_back(matriz);
    ids.push_back(proximoID);
    nomes.push_back(nome);

    cout << "\nMatriz criada com sucesso!\n";
    cout << "ID: " << proximoID << " | Nome: " << nome << endl;

    proximoID++;
}

// ===================== LISTAR =====================

void listarMatrizes()
{
    if(banco.empty())
    {
        cout << "Nenhuma matriz cadastrada.\n";
        return;
    }

    for(int i = 0; i < banco.size(); i++)
    {
        cout << "ID: " << ids[i]
             << " | Nome: " << nomes[i]
             << " | Dimensao: "
             << banco[i].size() << "x"
             << banco[i][0].size()
             << endl;
    }
}

// ===================== MOSTRAR =====================

void mostrarMatriz()
{
    int id;
    cout << "Digite o ID: ";
    cin >> id;

    int pos = buscarMatriz(id);

    if(pos == -1)
    {
        cout << "Matriz nao encontrada.\n";
        return;
    }

    cout << "\nNome: " << nomes[pos] << endl;

    for(int i = 0; i < banco[pos].size(); i++)
    {
        for(int j = 0; j < banco[pos][i].size(); j++)
        {
            cout << banco[pos][i][j] << "\t";
        }
        cout << endl;
    }
}

// ===================== EXCLUIR =====================

void excluirMatriz()
{
    int id;
    cout << "Digite o ID: ";
    cin >> id;

    int pos = buscarMatriz(id);

    if(pos == -1)
    {
        cout << "Matriz nao encontrada.\n";
        return;
    }

    banco.erase(banco.begin() + pos);
    ids.erase(ids.begin() + pos);
    nomes.erase(nomes.begin() + pos);

    cout << "Matriz excluida com sucesso.\n";
}

// ===================== SUBMENU VALORES =====================

void submenuValores()
{
    int id;
    cout << "Digite o ID da matriz: ";
    cin >> id;

    int pos = buscarMatriz(id);

    if(pos == -1)
    {
        cout << "Matriz nao encontrada.\n";
        return;
    }

    int opc;

    do
    {
        cout << "\n=== MENU VALORES (" << nomes[pos] << ") ===\n";
        cout << "1 - Mostrar matriz\n";
        cout << "2 - Alterar valor\n";
        cout << "3 - Buscar valor\n";
        cout << "0 - Voltar\n";
        cout << "Opcao: ";
        cin >> opc;

        if(opc == 1)
        {
            for(int i = 0; i < banco[pos].size(); i++)
            {
                for(int j = 0; j < banco[pos][i].size(); j++)
                {
                    cout << banco[pos][i][j] << "\t";
                }
                cout << endl;
            }
        }

        else if(opc == 2)
        {
            int l, c, val;

            cout << "Linha: ";
            cin >> l;

            cout << "Coluna: ";
            cin >> c;

            cout << "Novo valor: ";

            while(!lerNumero(val))
                cout << "Valor invalido! Digite numero: ";

            if(l >= 0 && c >= 0 &&
               l < banco[pos].size() &&
               c < banco[pos][0].size())
            {
                banco[pos][l][c] = val;
                cout << "Valor alterado.\n";
            }
            else
            {
                cout << "Posicao invalida.\n";
            }
        }

        else if(opc == 3)
        {
            int valor;
            bool achou = false;

            cout << "Valor: ";
            cin >> valor;

            for(int i = 0; i < banco[pos].size(); i++)
            {
                for(int j = 0; j < banco[pos][i].size(); j++)
                {
                    if(banco[pos][i][j] == valor)
                    {
                        cout << "Encontrado em [" << i << "][" << j << "]\n";
                        achou = true;
                    }
                }
            }

            if(!achou)
                cout << "Nao encontrado.\n";
        }

    } while(opc != 0);
}

// ===================== MENU =====================

void menu()
{
    int opc;

    do
    {
        cout << "\n=== BANCO DE MATRIZES ===\n";
        cout << "1 - Criar matriz\n";
        cout << "2 - Listar matrizes\n";
        cout << "3 - Mostrar matriz\n";
        cout << "4 - Excluir matriz\n";
        cout << "5 - Menu de valores\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opc;

        if(opc == 1) criarMatriz();
        else if(opc == 2) listarMatrizes();
        else if(opc == 3) mostrarMatriz();
        else if(opc == 4) excluirMatriz();
        else if(opc == 5) submenuValores();

    } while(opc != 0);
}

// ===================== MAIN =====================

int main()
{
    menu();
    return 0;
}
