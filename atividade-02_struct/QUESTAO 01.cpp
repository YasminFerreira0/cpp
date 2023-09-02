#include<iostream>
#include <cstdio>
using namespace std;
struct pesquisa{

      float salario;
      int idade;
      char sexo[20];
      int n_filhos;

};
int main(){
    pesquisa pessoa[10];
    int i,cont_f=0,cont_m=0;
    float s_mulher=0,s_homem=0,soma_f=0,media_f=0,m_mulher=0,m_homem=0;


    for(i=0; i<10; i++){

        cout<<"Informe o salario: ";
        cin>>pessoa[i].salario;

        cout<<"Informe idade: ";
        cin>>pessoa[i].idade;

        cout<<"Informe o sexo: ";
        cin>>pessoa[i].sexo;

        cout<<"Informe n_filhos: ";
        cin>>pessoa[i].n_filhos;
    }
    for(i=0; i<10; i++){
        if (pessoa[i].sexo=="feminino"){
            cont_f++;
            s_mulher=s_mulher+pessoa[i].salario;
        }
        if (pessoa[i].sexo=="masculino"){
            cont_m++;
            s_homem=s_homem+pessoa[i].salario;
        }
    }
    m_mulher=s_mulher/cont_f;
    m_homem=s_homem/cont_m;


    for(i=0; i<10; i++){
        soma_f=soma_f+pessoa[i].n_filhos;
    }
    media_f=soma_f/10;


}


