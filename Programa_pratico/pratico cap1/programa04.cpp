#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int matriz[4];
    
    cout  << "PROGRAMA MATRIZ1.CPP" << endl << endl;
    
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "Entre valores na matriz" << endl;
        cout << "N. " << i + 1 << ": ";
        cin >> matriz[i];
        cin.ignore(80, '\n');
    }
    cout << endl;
    
    for(size_t i = 0; i <= 3; i++)
    {
        cout << "Os valores inseridos sao..." << endl;
        cout << "N. " << i + 1 << ": " << matriz[i];
        cout << endl;
    }
    
    return 0;
}
