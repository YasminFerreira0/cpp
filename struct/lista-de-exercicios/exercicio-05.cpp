/*Faça um programa para cadastrar o horário de partida dos 10 voos diários de uma certa
companhia, com os dados: código, horário de partida, quantidade de passageiros, valor
da passagem, origem e destino. Solicitar ao usuário a origem e mostrar todos os dados
dos voos que possuem esta origem. Mostrar, também, todos os voos que possuem
horário de partida pela manhã.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Voos{
    int codigo, hp, mp, qp;
    float valor;
    char origem[30], destino[30]; };

int main ()
{
    Voos V[10];
    int i;
    char orig[30];

    cout<<"\nCadastre os "<<10<<" voos\n";
    for(i = 0; i < TAM; i++)
    {
        cout<<"\n\nInforme o codigo: ";
        cin>>V[i].codigo;

        cout<<"\nInforme as horas da partida: ";
        cin>>V[i].hp;

        cout<<"\nInforme os minutos da partida: ";
        cin>>V[i].mp;

        cout<<"\nInforme a quantidade de passageiros: ";
        cin>>V[i].qp;

        cout<<"\nInforme a origem: ";
        fflush(stdin);
        gets(V[i].origem);

        cout<<"\nInforme o destino: ";
        fflush(stdin);
        gets(V[i].destino);

        cout<<"\nInforme o valor da passagem: ";
        cin>>V[i].valor;
     }

     cout<<"\nInforme a origem dos voos da serem buscados: ";
     fflush(stdin);
     gets(orig);


    cout<<"\nRegistros dos voos encontrados a partim da origem informada\n";
    for(i = 0; i < 10; i++)
    {
        if(strcmpi(V[i].origem, orig) == 0)
        {
            cout<<"\nCodigo: "<<V[i].codigo;
            cout<<"\nHorario de partida: "<<V[i].hp<<"h"<<V[i].mp<<"min";
            cout<<"\nQuantidade de passageiros "<<V[i].qp;
            cout<<"\nDestino: "<<V[i].destino;
            cout<<"\nValor: "<<V[i].valor<<endl<<endl;
        }
    }

    cout<<"\nRegistros dos voos que partem pela manha\n";
    for(i = 0; i < 10; i++)
    {
        if(V[i].hp < 12)
        {
            cout<<"\nCodigo: "<<V[i].codigo;
            cout<<"\nHorario de partida: "<<V[i].hp<<"h"<<V[i].mp<<"min";
            cout<<"\nQuantidade de passageiros "<<V[i].qp;
            cout<<"\nOrigem: "<<V[i].origem;
            cout<<"\nDestino: "<<V[i].destino;
            cout<<"\nValor: "<<V[i].valor<<endl<<endl;
        }
    }


    return 0;
}
