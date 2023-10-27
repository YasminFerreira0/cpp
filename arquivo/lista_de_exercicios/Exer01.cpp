#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

main( )
{
    FILE *arquivo;
    char registro[50], cod[10], descr[20], estoq[10], preco[10];
    int i, j, qtde;

    //Abrindo o arquivo em modo "somente leitura"
    arquivo = fopen("produtos.txt", "r");

    cout<<"\nProdutos com mais de 100 unidades em estoque: "<<endl;

    //Enquanto não for fim de arquivo o looping será executado
    while(fgets(registro, 50, arquivo) != NULL){

        i = j = 0;

        while(registro[i] != ' ') cod[j++] = registro[i++]; //Extraindo o códido

        cod[j] = '\0';

        i++;

        j = 0;

        while(!isdigit(registro[i])) descr[j++] = registro[i++]; //Extraindo a descrição
        // !isdigit- verifics se o caracter e um digito e retorna 1, negando retirna 0

        descr[j-1] = '\0';

        j = 0;

        while(registro[i] != ' ') estoq[j++] = registro[i++]; //Extraindo a quantidade em estoque

        estoq[j] = '\0';

        i++;

        j = 0;

        while(registro[i] != '\n') preco[j++] = registro[i++]; //Extraindo o preço
        // /n indica final de linha


        preco[j] = '\0';

        qtde = atoi(estoq); //Convertendo a quantidade em estoque para inteiro

        if(qtde > 100) //Mostrando os produtos com mais de 100 unidades em estoque
            cout<<"\n"<<cod<<" "<<descr<<" "<<"R$:"<<preco;
    }

    cout<<endl;
    //Fechando o arquivo
    fclose(arquivo);
}
