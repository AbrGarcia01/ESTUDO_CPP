#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using std::cout;
using std::endl;
using std::cin;

void saida(float salarioBase, float valorHorasEx,
           float salarioBruto, float desconto, float salarioLiquido)
{
    cout << std::fixed << std::setprecision(2);
    cout << "\n--- RESUMO SALARIAL ---\n";
    cout << "Salario Base: R$ " << salarioBase << endl;
    cout << "Horas Extras: R$ " << valorHorasEx << endl;
    cout << "Salario Bruto: R$ " << salarioBruto << endl;
    cout << "Desconto INSS: R$ " << desconto << endl;
    cout << "Salario Liquido: R$ " << salarioLiquido << endl;
    cout << "-----------------------\n\n";
}

void Funcionario()
{
    std::string NomeFuncionario;
    cout << "Informe o nome do funcionario: ";
    getline(cin, NomeFuncionario);
}

float descontoInss(float SalarioBruto)
{
    if (SalarioBruto <= 1320.00)
        return SalarioBruto * 0.08;
    else if (SalarioBruto <= 2571.29)
        return SalarioBruto * 0.09;
    else
        return SalarioBruto * 0.11;
}

void calculoSalarial(float SalarioBase, float QuantHrsEx)
{
    float ValorHrsEx = QuantHrsEx * 25;
    float SalarioBruto = SalarioBase + ValorHrsEx;
    float desconto = descontoInss(SalarioBruto);
    float SalarioLiquido = SalarioBruto - desconto;

    saida(SalarioBase, ValorHrsEx, SalarioBruto, desconto, SalarioLiquido);
}

void entradaSalario()
{
    float SalarioBase, QuantHrsEx;
    cout << "Entre o valor do salario base do funcionario: ";
    cin >> SalarioBase;

    cout << "Entre a quantidade de horas extras trabalhadas: ";
    cin >> QuantHrsEx;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    calculoSalarial(SalarioBase, QuantHrsEx);
}

int main()
{
    cout << "BEM-VINDO AO PROGRAMA01.CPP\n\n";

    while (true)
    {
        Funcionario();
        entradaSalario();

        char resp;
        cout << "Gostaria de apresentar outro funcionario? ";
        cout << "[S] sim / qualquer tecla para nao: ";
        cin >> resp;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (resp != 'S' && resp != 's')
            break;
    }
}
