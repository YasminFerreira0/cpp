#include <iostream>
#include <string.h>
using namespace std;

//Prot�tipo da Fun��o
float calc(int x);

//Fun��o Principal
int main ()
{
    //Declara��o de vari�veis
    int n;
    float s;

    //Leitura do valor de N
    cout<<"\nInforme o valor de N: ";
    cin>>n;

    //Chamada da fun��o para calcular a soma da s�rie
    s = calc(n);

    //Escrita do resultado
    cout<<"\n\nS = "<<s<<endl;

    return 0;
}

//Fun��o que calcula e retorna o resultado da serie
float calc(int x)
{
    //Declara��o de Vari�veis
    int i, j, f;
    float soma = 1;

    cout<<"\nS = 1 + ";
    for(i = 1; i <= x; i++)
    {
        f = 1;
        for(j = 2; j <= i; j++)//Calcula o fatorial de i
            f = f * j;

        soma = soma + (float)1/f; //Soma os termos da serie
        cout<<"1/"<<i<<"! + ";
    }

    return soma;

}
