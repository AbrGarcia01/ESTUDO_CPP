#include <iostream>
#include <limits> 
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

float Volume(float raio, float altura)
{
    constexpr float PI = 3.14159f;
    return  (pi * (raio * raio) * altura);
}

int main(void)
{
    cout << std::setprecision(2) << std::fixed;
    float raio, altura;
    
    cout << "BEM-VINDO AO PROGRAMA" <<std:: endl << endl;
    
    cout << "Entre o valor do Raio: "; cin >> raio;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Entre o valor do altura: "; cin >> altura;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << endl;
    
    cout << std::setw(8) << "O valor do volume e: " << Volume(raio, altura) << endl << endl;
    
    cout << "OBRIGADO POR PARTICIPAR" << endl;
    
    return 0;
}
