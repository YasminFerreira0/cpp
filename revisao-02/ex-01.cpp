#include <iostream>
using namespace std;

int main ()
{
    float peso, maior;

    maior = 0;

    cout<<"Informe o peso ou zero para sair."<<endl;
     do{
        cin>>peso;
        if (maior < peso){
            maior = peso;
        }
    }while(peso != 0);


    cout<<"O maior peso e: "<<maior<<endl;

    return 0;
}
