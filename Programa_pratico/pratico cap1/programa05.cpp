#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int matriz[4];
    
    cout << "Bem-vindo ao programa matriz02.cpp\n\n";
    
    cout << "Insira os valores....\n";
    
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "N. " << i + 1 << ": ";
        cin >> matriz[i];
        
        if(matriz[i] % 2 == 0)
            matriz[i] = matriz[i] * 2;
        else
            matriz[i] = matriz[i] * 3;
    }
    
    cout << "\n\n";
    
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "N. " << i + 1 << ": " << matriz[i] << endl;
    }
    
    return 0;
}
