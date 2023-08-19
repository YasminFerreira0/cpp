/*Faça um programa que leia uma frase, terminada com um <Enter> e imprima a mesma
frase com suas palavras na ordem inversa. Considere que cada palavra é separada por
apenas um caracter de espaço.
    Exemplo:
    Entrada: Isto e apenas um exemplo
    Saida: exemplo um apenas e Isto
*/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main ()
{
    char frase[50];
    char palavra[50];
    char frase_inv[100];
    int i;

    cout<<"Informe uma frase: ";
    gets(frase);

    for(i=0; i<strlen(frase)-1; i++){
        while (frase[i] != ' ')
        {
            palavra[i] = frase[i];
        }
        palavra[i]= ' ';
    }

    cout<<frase;
}