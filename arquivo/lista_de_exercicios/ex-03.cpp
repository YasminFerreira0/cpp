/*A prefeitura de uma cidade realizou um censo coletando, de seus habitantes, os seguintes
dados: nome, cpf, rg, idade e nivel de escolaridade (fundamental, medio ou superior). Os
dados foram gravados em um arquivo para consultas posteriores. Para auxilia-los, faca um
programa para ler os dados do censo e escrever, em outro arquivo, os dados dos habitantes
com nivel superior completo.*/

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    FILE *arquivoL;
    FILE *arquivoW;

    char habitantes[50], nome[20], nvEscolar[20], cpf[10], rg[10], idade[5];

    arquivoL = fopen("ex_03_habitantes-leitura.txt", "r");

    arquivoW = fopen("ex_03_habitantes-escrever.txt", "w");

    if(arquivoL == NULL){
        cout<<"Erro ao abrir o arquivo de leitura."<<endl;
    }
    if(arquivoW == NULL){
        cout<<"Erro ao abrir o arquivo de escrita."<<endl;
    }

    while(fgets(habitantes, 50, arquivoL)!=NULL){

        if(strcmpi(nvEscolar, "superior") == 0){
            fputs(habitantes, arquivoW);
            if (ferror(arquivoW)){
                cout << "\nErro de gravacao!"; 
            }else{
                cout << "\nGravacao com sucesso!"; 
            }
        }
    }
    
    cout<<endl;
    fclose(arquivoL);
    fclose(arquivoW);

    return 0;
}