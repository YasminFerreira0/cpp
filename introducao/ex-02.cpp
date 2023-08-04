#include <iostream>
using namespace std;
int main()
{
    int raio, altura, volume;

    cout<<"Informe o raio da lata de oleo: ";
    cin>>raio;
    cout<<"Informe a altura da lata de oleo: ";
    cin>>altura;

    volume = 3.14159 * (raio * raio) * altura;

    cout<<"O volume da lata de oleo e: "<<volume<<endl;

    return 0;
}
