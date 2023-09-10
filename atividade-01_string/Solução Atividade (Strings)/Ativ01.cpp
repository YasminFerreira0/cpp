//Declaração de bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main () //Função principal
{
    char str[16]; //String a ser lida
    char stri[16]; //String invertida
    int i, j; //Indices

    //Lendo a string
    cout<<"\nInforme a palavra : ";
    gets(str);

    //Criando a string invertida
    for(i = 0, j = strlen(str) - 1; i < strlen(str); i++, j--)
        stri[j] = str[i];

    //Colocando o caracter delimitador na string invertida
    stri[strlen(str)] = '\0';

    //Verificando se a string é um palindromo
    if(strcmp(str, stri) == 0)
        cout<<"\nPalavra Palindromo\n";
    else
        cout<<"\nPalavra nao Palindromo\n";

    return 0;
}

