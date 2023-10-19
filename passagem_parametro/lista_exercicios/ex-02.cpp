/*Faça um programa contendo uma função que receba como parâmetro a hora de início e a
hora de término de um jogo, ambas subdivididas em dois valores distintos: horas e
minutos. A função deverá retornar a duração expressa em minutos, considerando que o
tempo máximo de duração de um jogo é de duração de um jogo é de 24 horas e que ele
pode começar em um dia e terminar no outro.*/

#include <iostream>
using namespace std;

int minutos(int h1, int m1, int h2, int m2) {
    int totalM = 0;

    while (h1 != h2 || m1 != m2) {
        totalM++;
        m1++;

        if (m1 == 60) {
            m1 = 0;
            h1++;
        }

        if (h1 == 24) {
            h1 = 0;
        }
    }

    return totalM;
}

int main() {
    int h1, m1, h2, m2;

    cout<<"Digite a hora de inicio (hh mm): ";
    cin>>h1>>m1;

    cout<<"Digite a hora de termino (hh mm): ";
    cin>>h2>>m2;

    cout << "A duracao do jogo em minutos e: " <<minutos(h1, m1, h2, m2)<< endl;

    return 0;
}
