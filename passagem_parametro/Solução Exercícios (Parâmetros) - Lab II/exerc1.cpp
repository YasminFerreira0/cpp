#include <iostream>
#include <string.h>
using namespace std;

//Protótipo da Função
float media( float x, float y, float z, char tp);

//Função Principal
int main ()
{
    //Declaração de variáveis
    float n1, n2, n3, m;
    char tipo;

    //Leitura das notas
    cout<<"\nInforme a primeira nota ";
    cin>>n1;

    cout<<"\nInforme a segunda nota ";
    cin>>n2;

    cout<<"\nInforme a terceira nota ";
    cin>>n3;

    cout<<"\nA - media aritmetica \nP - media ponderada \nInforme o tipo de media: ";
    cin>>tipo;

    //Chamada da função para o cálculo da média
    m = media(n1, n2, n3, tipo);

    //Escrita da média
    cout<<"\nValor da Media: "<<m<<endl;

    return 0;
}

//Função para calcular a média aritmética ou ponderada de três notas
float media( float x, float y, float z, char tp)
{
    float md;

    if(toupper(tp) == 'A')
        md = (x + y + z)/3; //Média Aritmética
    else
        md = (x * 5 + y * 3 + z * 2) / 10; //Média Ponderada

    return md; //Retorno da Média
}
