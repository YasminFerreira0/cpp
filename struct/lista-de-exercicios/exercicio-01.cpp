/*Faca um programa para cadastrar ate 50 imoveis a serem alugados ou vendidos,
contendo os seguintes dados: tipo (loja, apartamento, casa, quitinete), endereco, bairro,
valor, situacao (aluguel ou venda). Ao final, solicitar ao usuario a situacao a ser
pesquisada e mostrar todos os dados dos imoveis enquadrados na solicitacao.*/

#include <iostream>
#include <cstdio>
#include <cstring>
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
    int i, cont;


    cout<<"Quantos imoveis deseja cadastrar? (maximo 50): ";
    cin>>cont;

    for (i=0; i<cont; i++){
        cout<<"Informe os dados do imovel " << i + 1 << ":"<<endl;
        cout<<"\nInforme o tipo do imovel: ";
        cin>>imoveis[i].tipo;
        cout<<"Informe o endereco do imovel: ";
        cin>>imoveis[i].endereco;
        cout<<"Informe o bairro do imovel: ";
        cin>>imoveis[i].bairro;
        cout<<"Informe o valor do imovel: ";
        cin>>imoveis[i].valor;
        cout<<"Informe a situacao do imovel (A para aluguel ou V para venda): ";
        cin>>imoveis[i].situacao;
        cout<<endl;
    }

    cout<<"Informe a situacao do imovel que esta procurando (A para aluguel e V para venda): ";
    cin>>pesquisa;

    cout<<endl;

    cout << "Imoveis encontrados:" <<endl;
    for (i=0; i<cont; i++){
        if(pesquisa == imoveis[i].situacao){
            cout<<"Imovel."<<endl;
            cout<<"Tipo: "<<imoveis[i].tipo<<endl;
            cout<<"Endereco: "<<imoveis[i].endereco<<endl;
            cout<<"Bairro: "<<imoveis[i].bairro<<endl;
            cout<<"Valor: "<<imoveis[i].valor<<endl;
            cout<<endl<<endl;
        }
    }

    return 0;
}
