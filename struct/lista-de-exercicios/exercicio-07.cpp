/*Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e
pre�o de um eletrodom�stico. Fa�a um programa que permita exibir qual foi a m�dia
dos pre�os cadastrados e uma rela��o contendo o nome e o telefone das lojas cujo pre�o
estava abaixo da m�dia.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Loja{
    char nome[30], telefone[15];
    float preco; };

int main ()
{
    Loja L[15];
    int i;
    float media = 0;

    cout<<"\nCadastre os dados de "<<TAM<<" lojas\n";
    for(i = 0; i < 15; i++)
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

    media = media / 15;

    cout<<"\n\nLojas com preco do eletrodomestico abaixo da media\n";
    for(i = 0; i < 15; i++)
    {
        if(L[i].preco < media)
        {
            cout<<"\nNome: "<<L[i].nome;
            cout<<"\nTelefone: "<<L[i].telefone<<endl<<endl;

        }
    }

    return 0;
}
