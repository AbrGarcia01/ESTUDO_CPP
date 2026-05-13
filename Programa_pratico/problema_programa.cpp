#include <iostream>

using namespace std;

int main(void)
{
    for(char resp = 'S'; resp == 'S' or resp == 's';)
    {
        int n, fat = 1;
        do{
            cout << "Entre um valor numerico positivo para fatorial sequencial: ";
            cin >> n;
        }while(not(cin >> n) or n <= 0);
        
       for(int i = 1; i <= n; ++i)
       {
           fat *= i;
            
           cout << "Fatorial " << i << "!= " << fat << endl;
       }
       do{
           cout << "Gostaria de continuar: "; cin >> resp;
           cout << endl;
       }while(resp != 'S' or resp != 's');
    }
    
    cout << "Obrigado por participar do Programa fatorial!!!";
    
    return 0;
}
