#include <iostream>
#include <stdio.h>
#include <string.h>
#define TAM 10
using namespace std;

//Definição da estrutura
struct Voos{
    int codigo, hp, mp, qp;
    float valor;
    char origem[30], destino[30]; };

int main ()
{
    Voos V[TAM]; //Declaração do vetor do tipo estrutura
    int i;
    char orig[30];

    //Leitura dos dados dos voos a serem cadastrados
    cout<<"\nCadastre os "<<TAM<<" voos\n";
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

     //Lietura da origem dos voos a serem buscados
     cout<<"\nInforme a origem dos voos da serem buscados: ";
     fflush(stdin);
     gets(orig);


    //Escrita dos registros contendo voos com origem informada pelo usuario
    cout<<"\nRegistros dos voos encontrados a partim da origem informada\n";
    for(i = 0; i < TAM; i++)
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

    //Escrita dos registros contendo voos partindo pela manhã
    cout<<"\nRegistros dos voos que partem pela manha\n";
    for(i = 0; i < TAM; i++)
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
