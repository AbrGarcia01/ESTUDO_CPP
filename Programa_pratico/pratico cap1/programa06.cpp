#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int matrizA[4], matrizB[4];
    
    cout << "Bem-vindo ao programa matriz03.cpp\n\n";
    
    cout << "Insira os valores....\n";
    
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "N. " << i + 1 << ": ";
        cin >> matrizA[i];
    }
    
    
    
    for(size_t i = 0; i < 4; i++)
    {
        if(i % 2 == 0)
            matrizB[i] = matrizA[i] * 2;
        else 
            matrizB[i] = matrizA[i] * 3;
    }
    
    cout << "\n\n";
    
    cout << "MATRIZ A\n";
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "N. " << i + 1 << ": " << matrizA[i] << endl;
    }
    cout << endl << endl;
    
    cout << "MATRIZ B\n";
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "N. " << i + 1 << ": " << matrizB[i] << endl;
    }
    
    return 0;
}
