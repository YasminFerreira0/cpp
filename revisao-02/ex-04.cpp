#include <iostream>
using namespace std;

int main ()
{
    int i, n, soma, x;

    soma = 0;
    x = 2;

    cout<<"Informe um numero inteiro positivo: ";
    cin>>n;

    for (i=0; i<n; i++){
       soma += x;
       x += 2;
    }

    cout<<"A soma dos n primeiros numeros pares maiores que zero e: "<<soma<<endl;
    return 0;
}
