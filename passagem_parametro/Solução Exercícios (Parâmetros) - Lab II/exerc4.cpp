#include <iostream>
#include <string.h>
using namespace std;

//Protótipo da Função
float calc(int x);

//Função Principal
int main ()
{
    //Declaração de variáveis
    int n;
    float s;

    //Leitura do valor de N
    cout<<"\nInforme o valor de N: ";
    cin>>n;

    //Chamada da função para calcular a soma da série
    s = calc(n);

    //Escrita do resultado
    cout<<"\n\nS = "<<s<<endl;

    return 0;
}

//Função que calcula e retorna o resultado da serie
float calc(int x)
{
    //Declaração de Variáveis
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
