/*Faça um programa para ler, em um arquivo, as informações referentes aos produtos de uma
loja de informática cadastrados com os seguintes dados: código, descrição, quantidade em
estoque e preço da unidade. A seguir, o programa deverá apresentar o código, a descrição e o
preço dos produtos com mais de 100 unidades em estoque.*/

#include <iostream>
#include <stdio.h>

using namespace std;

struct produtos{
    int codigo, q_estoque;
    char descr[50];
    float preco;
};

int main(){

    produtos P[];

    FILE *p;
    p = fopen("produtos.txt", r);

}
