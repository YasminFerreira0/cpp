/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o sal�rio, idade, sexo e n�mero de filhos. Utilizando Struct, crie um programa que
leia os dados de 10 pessoas e, ao final, mostre:
    a) A m�dia de sal�rio das mulheres;
    b) A m�dia de sal�rio dos homens;
    c) A m�dia do n�mero de filhos;
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct dados {
    float salario;
    int idade;
    char sexo[15];
    int filhos;
};

int main (){
    dados pessoa[10];
    int i;

    cout<<"informe os dados da pesquisa."<<endl;
    for (i=0; i<10; i++){
        cout<<"pessoa ", i+1;

        cout<<"Informe o Salario: ";
        cin>>pessoa[i].salario;

        cout<<"Informe a idade: ";
        cin>>pessoa[i].idade;

        cout<<"Informe o sexo: ";
        fflush(stdin);
        gets(pessoa[i].sexo);

        cout<<endl<<endl;
    }



}
