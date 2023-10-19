/*Faça um programa possuindo uma função que receba um vetor A de dez elementos
inteiros como parâmetro. Ao final dessa função, deverá ter sido gerado um vetor B
contendo o fatorial de cada elemento de A. O vetor B deverá ser mostrado no programa
principal.*/

#include <iostream>
#include <string.h>

using namespace std;

float fat(int vetA[], float vetB[]);

int main(){
    int vA[10], i;
    float vB[10];

    cout<<"Informe dez numeros inteiros: ";
    for(i=1; i<10; i++){
        cin>>vA[i];
    }

    fat(vA, vB);

    cout<<"Fatorial de cada numero: "
    for(){}


}
