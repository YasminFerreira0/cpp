#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Definição da estrutura
struct Produtos{
    int codigo, em, ea;
    char descricao[30];
    float preco;};

int main ()
{
    Produtos P[20]; //Declaração do vetor do tipo estrutura
    int n, i;

    //Leitura da quantidade de registros
    do{
        cout<<"\nInforme a quantidade de registros a serem cadastrados ";
        cin>>n;
        if(n < 1 || n > 20)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 20\n";
    }while(n < 1 || n > 20);

    //Leitura dos dados dos produtos a serem cadastrados
    cout<<"\nCadastre os "<<n<<" produtos\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o codigo: ";
        cin>>P[i].codigo;

        cout<<"\nInforme a descricao: ";
        fflush(stdin);
        gets(P[i].descricao);

        cout<<"\nInforme o estoque minimo: ";
        cin>>P[i].em;

        cout<<"\nInforme o estoque atual: ";
        cin>>P[i].ea;

        cout<<"\nInforme o preco: ";
        cin>>P[i].preco;

    }


    //Escrita dos registros encontrados
    cout<<"\nRegistros dos produtos com estoque atual abaixo do estoque minimo\n\n";
    for(i = 0; i < n; i++)
    {
        if(P[i].ea < P[i].em)
        {
            cout<<"\nCodigo: "<<P[i].codigo;
            cout<<"\nDescricao: "<<P[i].descricao;
            cout<<"\nEstoque Minimo: "<<P[i].em;
            cout<<"\nEstoque Atual: "<<P[i].ea;
            cout<<"\nPreco: "<<P[i].preco<<endl<<endl;
        }
    }

    return 0;
}
