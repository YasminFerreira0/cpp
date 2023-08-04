#include <iostream>
using namespace std;
int main ()
{
    int codigo;
    float valor, desconto;

    cout<<"Informe o codigo do produto: ";
    cin>>codigo;

    cout<<"Informe o valor do produto: ";
    cin>>valor;

    switch (codigo){
        case 1001:
            desconto = valor - (valor * 0.22);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1254:
            desconto = valor - (valor * 0.30);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1548:
            desconto = valor - (valor * 0.32);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1687:
            desconto = valor - (valor * 0.37);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1923:
            desconto = valor - (valor * 0.40);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        default:
            cout<<"Codigo invalido.";
    }
}
