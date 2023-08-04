#include <iostream>
using namespace std;
int main()
{
    float deposito;

    cout<<"Informe o valor do deposito: ";
    cin>>deposito;

    deposito = deposito * 1.06;

    cout<<"O valor corrigido e: "<<deposito<<endl;

    return 0;
}
