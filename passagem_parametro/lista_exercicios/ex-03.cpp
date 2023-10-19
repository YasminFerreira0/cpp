/*Faça um programa contendo uma função que receba por passagem de parâmetro cinco
valores inteiros e que determina o maior e o menor entre eles. O maior e o menor valor
devem ser apresentados na função principal do programa.*/

#include <iostream>
using namespace std;

int encontrarMaiorMenor(int n1, int n2, int n3, int n4, int n5) {
    int maior, menor;
    
    maior = menor = n1;

    if (n2 > maior) {
        maior = n2;
    } else if (n2 < menor) {
        menor = n2;
    }

    if (n3 > maior) {
        maior = n3;
    } else if (n3 < menor) {
        menor = n3;
    }

    if (n4 > maior) {
        maior = n4;
    } else if (n4 < menor) {
        menor = n4;
    }

    if (n5 > maior) {
        maior = n5;
    } else if (n5 < menor) {     
        menor = n5;
    }
}

int main() {
    int n1, n2, n3, n4, n5;

    cout<<"Digite cinco números inteiros: ";
    cin>>n1>>n2>>n3>>n4>>n5;

    encontrarMaiorMenor(n1, n2, n3, n4, n5);

    cout << "O maior valor é: " << maior << endl;
    cout << "O menor valor é: " << menor << endl;

    return 0;
}
