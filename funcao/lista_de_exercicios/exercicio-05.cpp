/*Nas ilhas Weblands, a moeda oficial � o Bit, havendo notas de B$50,00, B$10,00,
B$5,00 e B$1,00. Fa�a um programa contendo uma fun��o para controlar um caixa
autom�tico: dado o valor desejado pelo cliente, a fun��o dever� determinar o n�mero
de cada uma das notas, de modo a totalizar esse valor, minimizando a quantidade de
c�dulas entregues. Por exemplo, se o valor desejado for B$ 50,00, basta uma nota de
B$50,00; se o valor desejado for B$72,00 � necess�rio entregar uma nota de B$50,00,
duas de B$10,00 e duas de B$1,00. A fun��o dever� receber por par�metro o valor
desejado pelo cliente e mostrar a quantidade de cada nota (50, 10, 5 e 1) que dever� ser
entregue ao cliente.*/

#include <iostream>

using namespace std;

void caixa (int valor){
    int n50, n10, n5, n1;

    n50 = valor / 50;
    n10 = (valor % 50) /10;
    n5 = ((valor % 50) %10) / 5;
    n1 = (((valor % 50) %10) % 5) / 1;

    cout<<"Quantidades de notas: ";
    cout<<"50: "<<n50<<endl;
    cout<<"10: "<<n10<<endl;
    cout<<"5: "<<n5<<endl;
    cout<<"1: "<<n1<<endl;

}

int main (){
    float valor;
    cout<<"Informe o valor desejado para retirada: ";
    cin>>valor;

    caixa(valor);

    return 0;
}
