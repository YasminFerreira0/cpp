#include <iostream>
#include <stdio.h>
#include <string.h>
#define TAM 40
using namespace std;

//Definição da estrutura
struct Aniversario{
    char nome[30];
    int dia, mes; };

int main ()
{
    Aniversario A[TAM]; //Declaração do vetor do tipo estrutura
    int i, j;

    //Leitura dos dados das pessoas a serem cadastrados
    cout<<"\nCadastre os dados de "<<TAM<<" pessoas\n";
    for(i = 0; i < TAM; i++)
    {
        cout<<"\n\nInforme o nome: ";
        fflush(stdin);
        gets(A[i].nome);

        cout<<"\nInforme o dia de aniversario: ";
        cin>>A[i].dia;

        cout<<"\nInforme o mes de aniversario: ";
        cin>>A[i].mes;
    }

    //Escrita dos dados das pessoas que fazem aniversario em cada um dos meses do ano
    for(j = 1; j <=12; j++)
    {
        cout<<"\nPessoas que fazem aniversario no mes: "<<j<<endl;
        for(i = 0; i < TAM; i++)
        {
            if(A[i].mes == j)
            {
                cout<<"\nNome: "<<A[i].nome;
                cout<<"\ndia: "<<A[i].dia<<endl<<endl;
            }
        }
    }

    return 0;
}
