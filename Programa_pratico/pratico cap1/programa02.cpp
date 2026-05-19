#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::numeric_limits;
using std::streamsize;

string LerNome()
{
    string alunoNomeSub;

    cout << "Entre o nome do aluno: ";
    getline(cin, alunoNomeSub);
    
    cout << endl;

    return alunoNomeSub;
}

string ValidarResultado(float Media)
{
    if (Media >= 7)
        return "Aprovado";

    else if (Media >= 5)
        return "Recuperacao";

    else
        return "Reprovado";
}

float ValidarEntrada(const string &msg)
{
    float valor;

    while (true)
    {
        cout << msg;

        if (!(cin >> valor))
        {
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Entrada invalida.\n\n";

            continue;
        }

        if (valor < 0 || valor > 10)
        {
            cout << "Digite uma nota entre 0 e 10.\n\n";

            continue;
        }

        break;
    }

    return valor;
}

float CalcularMedia(float Nota1Sub, float Nota2Sub, float Nota3Sub)
{
    float mediaSub = (Nota1Sub + Nota2Sub + Nota3Sub) / 3;

    return mediaSub;
}

float LerNotas()
{
    float Nota1, Nota2, Nota3;

    Nota1 = ValidarEntrada("Entre o valor da primeira nota: ");

    Nota2 = ValidarEntrada("Entre o valor da segunda nota: ");

    Nota3 = ValidarEntrada("Entre o valor da terceira nota: ");

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return CalcularMedia(Nota1, Nota2, Nota3);
}

void MostrarResultados(const string &alunoNome, float Media)
{
    cout << "\n====================================\n";

    cout << "      RESULTADO FINAL\n";

    cout << "====================================\n\n";

    cout << "Aluno........: " << alunoNome << endl;

    cout << "Media........: " << Media << endl;

    cout << "Situacao.....: "
         << ValidarResultado(Media) << endl;

    cout << "====================================\n\n";
}

int main()
{
    cout << std::fixed << std::setprecision(2);

    while (true)
    {
        string nomeAluno = LerNome();

        float mediaAluno = LerNotas();

        MostrarResultados(nomeAluno, mediaAluno);

        char resp;

        cout << "Gostaria de cadastrar outro aluno?\n";

        cout << "[S] Sim / qualquer tecla para sair: ";

        cin >> resp;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << endl;

        if (resp != 'S' && resp != 's')
            break;
    }

    cout << "\nPrograma encerrado.\n";
}
