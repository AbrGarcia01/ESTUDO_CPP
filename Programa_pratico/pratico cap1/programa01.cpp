#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

/*
  O programa deve ler: Nome do funcionario, Salario Base, Quantidade de horas extras.
  Calcular o das horas extras, equivalente a 25. Calcular o salario bruto e o desconto do inss.
*/ 



using std::cout;
using std::endl;
using std::cin;

cout << std::setprecision(2) << std::fixed << std::right;

void saida(

void Funcionario()
{
  std::string NomeFuncionario;
  cout << "Informe o nome do funcionario: ";
  getilne(cin, NomeFuncionario);
}

float descontoInss(float SalarioBruto)
{
  float DescontoInss;

  if(SalarioBruto <=  1320.00)
    return DescontoInss = ((SalarioBruto * 8) / 100);
  if(SalarioBruto >= 1320.01 and SalarioBruto <= 2571.29)
    return DescontInss = ((Salario * 9) / 100);
  if(SalarioBruto >= 2571.30)
    return DescontoInss = ((Salario * 11) / 100);
  
}

float calculoSalarial(float SalarioBase, float QuantHrsEx)
{
  float ValorHrsEx, SalarioBruto, SalarioLiquid, desconto;

  ValorHrsEx = QuantHrs * 25;
  SalarioBruto = SalarioBase + ValorHrsEx;
  desconto = descontoInss(SalarioBruto
  SalarioLiquid = salarioBruto - desconto; 

  saida(SalarioBase, ValorHrsEx, SalarioBruto);
  
}

void entradaSalario()
{
  float SalarioBase, QuantHrsEx;
  cout << "Entre o valor do salario base do funcionario: "; cin >> SalarioBase;
  cout << endl;
  cout << "Entre a quantidade de horas extras trabalhadas: "; cin >> QuantHrsEx;

  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  calculoSalarial(SalarioBase, QuantHrsEx);
  
}

int main(void)
{
  cout << "BEM-VINDO AO PROGRAMA01.CPP" << endl << endl;

  while(true){

    Funcionario();
    entradaSalario();

    char resp;
    cout << "Gostaria de apresentar outro funcionario? " << end;
    cout << "Digite [S] p/ sim ou qualquer outra letra p/ nao...: "; cin >> resp;

    if(resp != 'S' || resp != 's')
      break; 
  }
  
  
  
  
}
