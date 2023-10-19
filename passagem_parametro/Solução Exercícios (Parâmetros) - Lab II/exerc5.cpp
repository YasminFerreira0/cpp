#include <iostream>
#include <string.h>
using namespace std;

//Protótipo da Função
void fatorial(int X[], int Y[]);

//Função Principal
int main ()
{
    //Declaração de vetor e variáveis
    int A[10], B[10], i;

    //Leitura do conjunto de números
    cout<<"Informe dez numeros inteiros: ";
    for(i = 0; i < 10; i++)
        cin>>A[i];

    //Chamada da função para calcular o fatorial de cada número
    fatorial(A, B);

    //Escrita dos fatoriais
    cout<<"\nFatorial de cada numero: ";
    for(i = 0; i < 10; i++)
        cout<<B[i]<<" ";

    cout<<endl;
    return 0;
}

//Função que calcula e retorna o fatorial de cada número de um conjunto
void fatorial(int X[], int Y[])
{
    //Declaração de variáveis
    int i, j, fat;

    for(i = 0; i < 10; i++)//Percorrendo todos os número do conjunto
    {
        fat = 1;
        for(j = 2; j <= X[i]; j++) //Calculando o fatorial de cada número do conjunto
            fat *= j;

        Y[i] = fat;
    }

}
