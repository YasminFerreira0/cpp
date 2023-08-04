#include <iostream>
using namespace std;
int main ()
{
    float nota;

    cout<<"Informe a nota do aluno: ";
    cin>>nota;

    if (nota < 4.9){
        cout<<"Nota - Conceito: Ruim."<<endl;
    }else{
        if (nota < 7.9){
            cout<<"Nota - Conceito: Regular."<<endl;
        }else{
            cout<<"Nota - Conceito: Bom."<<endl;
        }
    }
    return 0;
}
