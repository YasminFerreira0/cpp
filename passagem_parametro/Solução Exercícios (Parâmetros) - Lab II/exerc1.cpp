#include <iostream>
#include <string.h>
using namespace std;

//Prot�tipo da Fun��o
float media( float x, float y, float z, char tp);

//Fun��o Principal
int main ()
{
    //Declara��o de vari�veis
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

    //Chamada da fun��o para o c�lculo da m�dia
    m = media(n1, n2, n3, tipo);

    //Escrita da m�dia
    cout<<"\nValor da Media: "<<m<<endl;

    return 0;
}

//Fun��o para calcular a m�dia aritm�tica ou ponderada de tr�s notas
float media( float x, float y, float z, char tp)
{
    float md;

    if(toupper(tp) == 'A')
        md = (x + y + z)/3; //M�dia Aritm�tica
    else
        md = (x * 5 + y * 3 + z * 2) / 10; //M�dia Ponderada

    return md; //Retorno da M�dia
}
