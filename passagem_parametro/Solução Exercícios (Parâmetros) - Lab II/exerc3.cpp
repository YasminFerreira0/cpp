#include <iostream>
#include <string.h>
using namespace std;

//Prot�tipo da Fun��o
void maior_menor(int V[], int &x, int &y);

//Fun��o Principal
int main ()
{
    //Declara��o de vetor e vari�veis
    int V[5], maior, menor, i;

    //Leitura dos valores
    cout<<"\nInforme cinco valores inteiros ";
    for(i = 0; i < 5; i++)
        cin>>V[i];

    //Chamada da fun��o para calcular o maior e o menor valor do conjunto
    maior_menor(V, maior, menor);

    //Escrita do maior e do menor valor
    cout<<"\nMaior valor: "<<maior<<endl;
    cout<<"\nMenor valor: "<<menor<<endl;

    return 0;
}

//Fun��o que calcula o maior e o menor valor do conjunto
void maior_menor(int V[], int &x, int &y)
{
    int i;

    x = V[0];
    y = V[0];

    for(i = 1; i < 5; i++)
    {
        //Encontrando o maior valor
        if(x < V[i])
            x = V[i];
        else
        {
            //Encontrar o menor valor
            if(y > V[i])
                y = V[i];
        }
    }

}
