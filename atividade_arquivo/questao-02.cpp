/*Fa�a um programa que leia registros de um arquivo de estudantes. Cada estudante possui
um n�mero de identidade, seu nome e sua idade. O programa deve apresentar na tela o
n�mero de estudantes lidos, o nome e a idade do estudante mais velho.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    FILE *arquivo;

    char registro[60], id[20], nome[30], idade[10];
    int i, j;


    arquivo = fopen("questao-02.txt", "r");

    cout<<"Registros de Estudantes"<<endl<<endl;

    while(fgets(registro, 60, arquivo) != NULL){
            i=j=0;

            while(registro[i] != ' ') id[j++] = registro[i++];
            id[j] = '\0';
            i++;
            j = 0;

            while(!isdigit(registro[i])) nome[j++] = registro[i++];
            nome[j-1] = '\0';
            j = 0;

            while(registro[i] != '\n') idade[j++] = registro[i++];
            idade[j]= '\0';

            cout<<"ID: "<<id<<"     Nome: "<<nome<<"    Idade: "<<idade<<endl;
    }
    cout<<endl;
    fclose(arquivo);




}
