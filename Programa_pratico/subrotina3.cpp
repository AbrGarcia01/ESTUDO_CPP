#include <iostream>
#include <limits>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

float Conversao(float fahrenheit)
{
     return = (fahrenheit * 9) / 5 + 32;
}

int main(void)
{
    cout << std::setprecision(1) << std::fixed;
    float fahrenheit;
    
    cout << "Seja bem-vindo ao programa!!!" << endl << endl;
    cout << "Faça a entrada de um valor referente a temperatura em graus Celsius" << endl;
    cout << "Temperatura: "; cin >> fahrenheit;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << endl;
    cout << std::setw(4) << "O valor convertido em Fahrenheit e: " << Conversao(fahrenheit) << endl << endl;
    
    cout << "Obrigado por participar do programa!!" << endl;
    
    return 0;
}
