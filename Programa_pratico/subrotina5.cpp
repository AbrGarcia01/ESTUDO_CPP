#include <iostream>
#include <iomanip>
#include <limits>

using std::cout;
using std::endl;
using std::cin;

float km_litro(float tempo, float velocidade)
{
    int km = tempo * velocidade;
    return (km/12);
}

int main(void)
{
    float tempo, velocidade;
    cout << std::setprecision(2) << std::fixed;
    
    cout << "Entre o valor do tempo percorrido durante a viagem: ";
    cin >> tempo;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Entre o valor da velocidade media percorrida: ";
    cin >> velocidade;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "A quantidade de litros consumida pela viagem foi: " << km_litro(tempo, velocidade);
    
    return 0;
}
