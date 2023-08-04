#include <iostream>
using namespace std;
int main()
{
    float sFixo, vendas, sFinal;

    cout<<"Informe o dalario fixo do funcionario: ";
    cin>>sFixo;
    cout<<"Informe o valor das vendas: ";
    cin>>vendas;

    sFinal = sFixo + (vendas * 0.05);

    cout<<"O salrio final do funcionario e: "<<sFinal<<endl;

    return 0;
}
