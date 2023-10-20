/*Faça um programa que contenha uma função, que dado um valor em quilômetros por
parâmetro, faça a conversão para milhas e retorne o resultado para a função principal.
Lembrando que 1 quilômetro equivale a aproximadamente 0,62 milhas.*/

#include <iostream>
#include <string.h>

using namespace std;

float conversao(float km, float milha);

int main(){
    float km, m;

    cout<<"Informe um valor em quilometros: ";
    cin>>km;

    conversao(km, m);

    cout<<"A conversao em milhas e de: "<<m<<endl;

    return 0;
}

float conversao(float km, float milha){
    milha = km * 0,62;
}

