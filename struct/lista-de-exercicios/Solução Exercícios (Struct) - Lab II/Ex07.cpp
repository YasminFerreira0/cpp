#include <iostream>
#include <stdio.h>
#include <string.h>
#define TAM 15
using namespace std;

//Defini��o da estrutura
struct Loja{
    char nome[30], telefone[15];
    float preco; };

int main ()
{
    Loja L[TAM]; //Declara��o do vetor do tipo estrutura
    int i;
    float media = 0;

    //Leitura dos dados das lojas a serem cadastrados
    cout<<"\nCadastre os dados de "<<TAM<<" lojas\n";
    for(i = 0; i < TAM; i++)
    {
        cout<<"\n\nInforme o nome: ";
        fflush(stdin);
        gets(L[i].nome);

        cout<<"\nInforme o telefone: ";
        fflush(stdin);
        gets(L[i].telefone);

        cout<<"\nInforme o preco do eletrodomestico: ";
        cin>>L[i].preco;

        media = media + L[i].preco;
    }

    media = media / 15; //Calculando a m�dia dos pre�os do eletrodom�stico

    //Escrita dos dados das lojas que possuem pre�o do eletrodom�stico abaixo da m�dia
    cout<<"\n\nLojas com preco do eletrodomestico abaixo da media\n";
    for(i = 0; i < TAM; i++)
    {
        if(L[i].preco < media)
        {
            cout<<"\nNome: "<<L[i].nome;
            cout<<"\nTelefone: "<<L[i].telefone<<endl<<endl;

        }
    }

    return 0;
}
