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
    char palavra[50][50];
    char frase_inv[100];
    int i, j, k;

    i=0;
    j=0;
    k=0;

    cout<<"Informe uma frase: ";
    gets(frase);

    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            palavra[j][k++] = frase[i];
        } else {
            palavra[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    palavra[j][k] = '\0';

    for (int p = j; p >= 0; p--) {
        cout << palavra[p];
        if (p > 0) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}