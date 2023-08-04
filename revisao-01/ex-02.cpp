#include <iostream>
using namespace std;
int main ()
{
    int qAtual, qMaxima, qMinima, qMedia;

    cout<<"Informe a quantidade atual em estoque: ";
    cin>>qAtual;

    cout<<"Informe a quantidade maxima do estoque: ";
    cin>>qMaxima;

    cout<<"Informe a quantidade minina do estoque: ";
    cin>>qMinima;

    qMedia = (qMaxima + qMinima)/2;

    cout<<"A quantidade media do estoque e: "<<qMedia<<endl;
    if (qAtual >= qMedia){
        cout<<"Nao efetual compra.";
    }else{
        cout<<"Efetual compra.";
    }

    return 0;
}
