#include <iostream>
using namespace std;
int main ()
{
    int tempo;
    float salario, reajuste;

    cout<<"Informe o tempo de servico do funcionario: ";
    cin>>tempo;

    cout<<"Informe o salario do funcionario: ";
    cin>>salario;

    if (tempo < 10){
        reajuste = salario * 1.08;
    }else{
        reajuste = salario * 1.10;
    }

    cout<<"O reajuste salarial e: "<<reajuste<<endl;

    return 0;
}
