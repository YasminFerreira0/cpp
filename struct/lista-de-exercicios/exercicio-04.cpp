/*Fa�a um programa para cadastrar o nome do munic�pio, seu estado e sua popula��o.
Mostrar todos os munic�pios cadastrados do estado de Goi�s e os dados do munic�pio
que cont�m a maior popula��o. Cadastrar at� 90 munic�pios.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Municipios{
    char nome[30], uf[3];
    int populacao; };

int main ()
{
    Municipios M[90];
    int n, i, maior = 0;

    do{
        cout<<"\nInforme a quantidade de registros a serem cadastrados ";
        cin>>n;
        if(n < 1 || n > 90)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 20\n";
    }while(n < 1 || n > 90);

    cout<<"\nCadastre os "<<n<<" municipios\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o nome: ";
        fflush(stdin);
        gets(M[i].nome);

        cout<<"\nInforme o estado: ";
        fflush(stdin);
        gets(M[i].uf);

        cout<<"\nInforme a populacao: ";
        cin>>M[i].populacao;
     }


    cout<<"\nRegistros dos municipios cadastrados do estado de Goias\n\n";
    for(i = 0; i < n; i++)
    {
        if(strcmpi(M[i].uf, "GO") == 0)
        {
            cout<<"\nMunicipio: "<<M[i].nome;
            cout<<"\nPopulacao: "<<M[i].populacao<<endl<<endl;
        }

        if(M[i].populacao > M[maior].populacao)
            maior = i;
    }

    cout<<"\nMunicipio de maior populacao: "<<M[maior].nome;
    cout<<"\nEstado: "<<M[maior].uf;
    cout<<"\nPopulacao: "<<M[maior].populacao<<endl<<endl;

    return 0;
}
