#include <iostream>
#include <string.h>
using namespace std;

//Prot�tipo da Fun��o
void fatorial(int X[], int Y[]);

//Fun��o Principal
int main ()
{
    //Declara��o de vetor e vari�veis
    int A[10], B[10], i;

    //Leitura do conjunto de n�meros
    cout<<"Informe dez numeros inteiros: ";
    for(i = 0; i < 10; i++)
        cin>>A[i];

    //Chamada da fun��o para calcular o fatorial de cada n�mero
    fatorial(A, B);

    //Escrita dos fatoriais
    cout<<"\nFatorial de cada numero: ";
    for(i = 0; i < 10; i++)
        cout<<B[i]<<" ";

    cout<<endl;
    return 0;
}

//Fun��o que calcula e retorna o fatorial de cada n�mero de um conjunto
void fatorial(int X[], int Y[])
{
    //Declara��o de vari�veis
    int i, j, fat;

    for(i = 0; i < 10; i++)//Percorrendo todos os n�mero do conjunto
    {
        fat = 1;
        for(j = 2; j <= X[i]; j++) //Calculando o fatorial de cada n�mero do conjunto
            fat *= j;

        Y[i] = fat;
    }

}
