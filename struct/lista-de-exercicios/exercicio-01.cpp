/*Faça um programa para cadastrar até 50 imóveis a serem alugados ou vendidos,
contendo os seguintes dados: tipo (loja, apartamento, casa, quitinete), endereço, bairro,
valor, situação (aluguel ou venda). Ao final, solicitar ao usuário a situação a ser
pesquisada e mostrar todos os dados dos imóveis enquadrados na solicitação.*/

#include <iostream>
#include <cstdio>
using namespace std;
struct cadastro{
    char tipo[50];
    char endereco[50];
    char bairro[50];
    float valor;
    char situacao;
};
int main(){
    cadastro imoveis[50];
    char pesquisa;
    int i;

    for (i=0; i<50; i++){
        cout<<"Informe os dados do imovel."<<endl<<endl;
        cout<<"Informe o tipo do imovel: ";
        gets(imoveis[i].tipo);
        cout<<"Informe o endereco do imovel: ";
        gets(imoveis[i].endereco);
        cout<<"Informe o bairro do imovel: ";
        gets(imoveis[i].bairro);
        cout<<"Informe o valor do imovel: ";
        gets(imoveis[i].valor);
        cout<<"Informe a situacao do imovel (A para aluguel ou v para venda): ";
        gets(imoveis[i].situacao);
    }

    cout<<"Informe a situacao do imovel que esta procurando (A para aluguel e V para venda).";
    gets(pesquisa);

    for (i=0; i<50; i++){
        if(pesquisa == ){
            cout<<
        }
    }

}
