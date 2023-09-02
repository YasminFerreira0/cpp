/*Dados os seguintes campos de um registro: nome, dia de anivers�rio e m�s de
anivers�rio, fa�a um programa que mostre em cada um dos meses do ano quem s�o as
pessoas que fazem anivers�rio, exibir tamb�m o dia. Considere um conjunto de 40
pessoas.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Aniversario{
    char nome[30];
    int dia, mes; };

int main ()
{
    Aniversario A[40];
    int i, j;

    cout<<"\nCadastre os dados de "<<TAM<<" pessoas\n";
    for(i = 0; i < 40; i++)
    {
        cout<<"\n\nInforme o nome: ";
        fflush(stdin);
        gets(A[i].nome);

        cout<<"\nInforme o dia de aniversario: ";
        cin>>A[i].dia;

        cout<<"\nInforme o mes de aniversario: ";
        cin>>A[i].mes;
    }

    for(j = 1; j <=12; j++)
    {
        cout<<"\nPessoas que fazem aniversario no mes: "<<j<<endl;
        for(i = 0; i < 40; i++)
        {
            if(A[i].mes == j){
                cout<<"\nNome: "<<A[i].nome;
                cout<<"\ndia: "<<A[i].dia<<endl<<endl;
            }
        }
    }

    return 0;
}
