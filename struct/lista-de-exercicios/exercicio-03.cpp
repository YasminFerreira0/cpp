/*Faça um programa para cadastrar até 20 produtos de uma loja com os seguintes dados:
código, descrição, estoque mínimo, estoque atual e preço. Mostrar todos os dados dos
produtos que contenham o estoque atual menor que o estoque mínimo para efetuar
compra.*/

#include <iostream>
#include <cstring>

using namespace std;

struct cadastro {
    int codigo;
    char descricao[100];
    int est_min;
    int est_atual;
    float preco;
};

int main(){
    cadastro produto[20];
    int i, cont;

    cout<<"Quantos produtos deseja cadastrar? (maximo 20): ";
    cin>>cont;

    cout<<"Informe os dados dos produtos."<<endl;
    for(i=0; i<cont; i++){
        cout<<"Produto "<<i+1<<": "<<endl;
        cout<<"Codigo: ";
        cin>>produto[i].codigo;
        cout<<"Descricao: ";
        cin>>produto[i].descricao;
        cout<<"Estoque minimo: ";
        cin>>produto[i].est_min;
        cout<<"Estoque atual: ";
        cin>>produto[i].est_atual;
        cout<<"preco: ";
        cin>>produto[i].preco;
    }

    cout<<"Produtos com estoque menor que o estoque minimo"<<endl;

    for (i=0; i<cont; i++){
        if(produto[i].est_atual < produto[i].est_min){
            cout<<"Efetuar compra do produto"<<endl;
            cout<<"Codigo: "<<produto[i].codigo;
            cout<<"Descricao: "<<produto[i].descricao;
            cout<<"Estoque minimo: "<<produto[i].est_min;
            cout<<"Estoque atual: "<<produto[i].est_atual;
            cout<<"preco: "<<produto[i].preco;
            cout<<endl<<endl;
        }
    }
    return 0;
}
