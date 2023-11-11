/*Fa�a um programa que leia os dados de uma pessoa, informados pelo usu�rio, e salve-os
em um arquivo. Os dados da pessoa s�o: nome, cpf, data de nascimento e endere�o. A
cada registro informado, o programa deve perguntar ao usu�rio se deseja ler um novo
registro e gravar no arquivo.*/

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    FILE *arquivo;

    char registro[100], nome[30], cpf[10], d_nasc[10], ender[50];
    int n_reg=0;

    arquivo = fopen("questao-01.txt", "w");

    cout<<"Informe os Registros"<<endl;

    do{
        cout<<"Informe os dados."<<endl;

        cout<<"Informe o nome: ";
        fflush(stdin);
        gets(nome);

        cout<<"Informe o CPF: ";
        fflush(stdin);
        gets(cpf);

        cout<<"Informe a data de nascimento: ";
        fflush(stdin);
        gets(d_nasc);

        cout<<"Informe o endereco: ";
        fflush(stdin);
        gets(ender);

        fprintf(arquivo, "%s %s %s %s \n", nome, cpf, d_nasc, ender);


        cout<<endl;

        cout<<"Deseja realizar outro registro? (0-sim; 1-nao)";
        cin>>n_reg;

    }while(n_reg !=1);

    fclose(arquivo);

}
