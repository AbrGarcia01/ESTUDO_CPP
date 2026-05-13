#include <iostream>

using namespace std;

int main(void)
{
    int i, fat = 1;
    char resp;
    
    for(resp = 'S'; resp == 'S' or resp == 's';)
    {
        int n;
        cout << "Entre o valor para fatorial sequencial: ";
        cin >> n;
        
       for(i = 1; i <= n; ++i)
       {
           fat *= i;
           
           cout << "Fatorial: " << fat << endl;
       }
       
       cout << "Gostaria de continuar: "; cin >> resp;
       cout << endl;
    }
    
    cout << "Obrigado por participar do Programa fatorial!!!";
    
    return 0;
}
