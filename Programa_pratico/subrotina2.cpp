#include <iostream>
#include <limits>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

float conversao(float Celsius)
{
     return = (Celsius * 9) / 5 + 32;
}

int main(void)
{
    cout << std::setprecision(1) << std::fixed;
    float Celsius;
    
    cout << "Seja bem-vindo ao programa!!!" << endl << endl;
    cout << "Faça a entrada de um valor referente a temperatura em graus Celsius" << endl;
    cout << "Temperatura: "; cin >> Celsius;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << endl;
    cout << std::setw(4) << "O valor convertido em Fahrenheit e: " << conversao(Celsius) << endl << endl;
    
    cout << "Obrigado por participar do programa!!" << endl;
    
    return 0;
}
