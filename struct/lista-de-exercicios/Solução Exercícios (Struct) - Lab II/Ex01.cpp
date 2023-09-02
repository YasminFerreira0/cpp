#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Definição da estrutura
struct Imoveis{
    char tipo[15], ender[50], bairro[30], situacao[15];
    float valor; };

int main ()
{
    Imoveis I[50]; //Declaração do vetor do tipo estrutura
    int n, i;
    char sit[15];

    //Leitura da quantidade de registros
    do{
        cout<<"\nInforme a quantidade de registros a serem cadastrados ";
        cin>>n;
        if(n < 1 || n > 50)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 50\n";
    }while(n < 1 || n > 50);

    //Leitura dos dados dos imoveis a serem cadastrados
    cout<<"\nCadastre os "<<n<<" Imoveis\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o tipo do imovel (Loja, apartamento, casa ou quitinete): ";
        fflush(stdin);
        gets(I[i].tipo);

        cout<<"\nInforme o endereco: ";
        fflush(stdin);
        gets(I[i].ender);

        cout<<"\nInforme o bairro: ";
        fflush(stdin);
        gets(I[i].bairro);

        cout<<"\nInforme a situacao do imovel (aluguel ou venda): ";
        fflush(stdin);
        gets(I[i].situacao);

        cout<<"\nInforme o valor: ";
        cin>>I[i].valor;
    }

    //Leitura da situacao de imovel a ser buscado
    cout<<"\nInforme a situacao dos imoveis a serem buscados: ";
    fflush(stdin);
    gets(sit);

    //Escrita dos registros encontrados
    cout<<"\nRegistros dos imoveis encontrados\n\n";
    for(i = 0; i < n; i++)
    {
        if(strcmpi(I[i].situacao, sit) == 0)
        {
            cout<<"\nTipo do imovel: "<<I[i].tipo;
            cout<<"\nEndereco: "<<I[i].ender;
            cout<<"\nBairro: "<<I[i].bairro;
            cout<<"\nValor: "<<I[i].valor<<endl<<endl;
        }
    }

    return 0;
}
