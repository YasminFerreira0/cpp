/*Uma loja de revenda de autom�veis mant�m, em um arquivo, os dados dos ve�culos que est�o
dispon�veis � venda, tais como: modelo, fabricante, cor, ano, placa e valor. Para auxiliar os
vendedores da loja, fa�a um programa para ler, do usu�rio, o modelo de um ve�culo desejado
e apresentar a cor, o ano e o valor dos ve�culos equivalentes que est�o cadastrados no arquivo.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    FILE *arquivo;

    char veiculos [50], modelo[10], fab[30], cor[10], ano[5], placa[20], valor[10];
    char m_des[20];
    int i, j;

    arquilo = fopen("veiculos.txt", r);

    cout<<"Informe o modelo de um veiculo desejado";
    for(i=0;i<strlen(m_des);i++){
        gets(m_des[i]);
    }

    while(fgets(veiculos, 50, arquivo)!=NULL){
        i=j=0;

        while(veiculo[i] != ' ') modelo[j++] = veiculo[i++];

        modelo[j] = '\0';

        i++;

        j = 0;

        while(veiculo[i] != ' ') fab[j++] = veiculo[i++];

        fab[j] = '\0';

        i++;

        j = 0;

        while(veiculo[i] != ' ') cor[j++] = veiculo[i++];

        cor[j] = '\0';

        i++;

        j = 0;

        while(veiculo[i] != ' ') ano[j++] = veiculo[i++];

        ano[j] = '\0';

        i++;

        j = 0;

         while(veiculo[i] != ' ') placa[j++] = veiculo[i++];

        placa[j] = '\0';

        i++;

        j = 0;

        while(veiculo[i] != '\n') valor[j++] = veiculo[i++];

        valor[j] = '\0';

        if (strcmpi(m_des, modelo)==0){
            cout<<"\n"<<cor<<" "<<ano<<" "<<valor;

        }


    }

}
