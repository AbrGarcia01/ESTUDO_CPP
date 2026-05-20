#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

float saldo = 0;

// ===============================
// VALIDAR ENTRADA
// ===============================
float ValidarEntrada(const string &msg)
{
    float valor;

    while (true)
    {
        cout << msg;

        if (!(cin >> valor))
        {
            cin.clear();

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "Valor invalido.\n\n";

            continue;
        }

        if (valor <= 0)
        {
            cout << "Valor deve ser maior que zero.\n\n";

            continue;
        }

        break;
    }

    return valor;
}

// ===============================
// SACAR
// ===============================
void Sacar()
{
    cout << "\n===== SAQUE =====\n";

    float saque = ValidarEntrada("Valor do saque: ");

    if (saque > saldo)
    {
        cout << "Saldo insuficiente.\n\n";
        return;
    }

    saldo -= saque;

    cout << "Saque realizado com sucesso.\n\n";
}

// ===============================
// DEPOSITAR
// ===============================
void Depositar()
{
    cout << "\n===== DEPOSITO =====\n";

    float depositarDinheiro =
        ValidarEntrada("Valor a depositar: ");

    saldo += depositarDinheiro;

    cout << "Deposito realizado com sucesso.\n\n";
}

// ===============================
// MOSTRAR SALDO
// ===============================
void Saldo()
{
    cout << "\n========================================\n";

    cout << std::fixed << std::setprecision(2);

    cout << "Saldo em conta: R$ "
         << saldo << endl;

    cout << "========================================\n\n";
}

// ===============================
// MENU
// ===============================
void Menu()
{
    cout << "=========================\n";
    cout << "====== MENU BANCO =======\n";
    cout << "=========================\n";
    cout << "[1] DEPOSITAR\n";
    cout << "[2] SACAR\n";
    cout << "[3] VER SALDO\n";
    cout << "[4] SAIR\n";
    cout << "=========================\n";
}

// ===============================
// MAIN
// ===============================
int main()
{
    cout << "BEM-VINDO AO PROGRAMA\n\n";

    bool execucao = true;

    while (execucao)
    {
        Menu();

        int opcao;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (cin.fail())
        {
            cin.clear();

            cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            cout << "Opcao invalida.\n\n";

            continue;
        }

        switch (opcao)
        {
            case 1:
                Depositar();
                break;

            case 2:
                Sacar();
                break;

            case 3:
                Saldo();
                break;

            case 4:
                execucao = false;
                cout << "Encerrando sistema...\n";
                break;

            default:
                cout << "Opcao invalida.\n\n";
        }
    }

    return 0;
}
