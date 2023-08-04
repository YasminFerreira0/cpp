#include <iostream>
using namespace std;
int main ()
{
    int h, m, s, total;

    cout<<"Informe um valor em horas: ";
    cin>>h;
    cout<<"informe um valor em minutos: ";
    cin>>m;
    cout<<"Informe um valor em segundos: ";
    cin>>s;

    h = h * 3600;
    m = m * 60;

    total = h + m + s;

    cout<<"O total de segundos e:"<<total<<endl;

    return 0;
}
