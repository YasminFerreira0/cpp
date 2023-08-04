#include <iostream>
using namespace std;
int main ()
{
    float salario, fin;

    cout<<"Informe o salario: ";
    cin>>salario;

    cout<<"Informe o valor do financiamento: ";
    cin>>fin;

    if (fin > (salario * 0.30)){
        cout<<"Financiamento Concedido."<<endl;
    }else{
        cout<<"Financiamento Negado."<<endl;
    }
    return 0;
}
