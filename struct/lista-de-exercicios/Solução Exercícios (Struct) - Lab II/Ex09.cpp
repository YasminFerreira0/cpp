#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Definição da estrutura
struct Cliente{
    int codigo, horas;
    char email[30];
    float valor; };

int main ()
{
    Cliente C[200]; //Declaração do vetor do tipo estrutura
    int i, n;

    //Leitura da quantidade de clientes
    do{
        cout<<"\nInforme a quantidade de clientes a serem cadastrados ";
        cin>>n;

        if(n < 1 || n > 200)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 200\n";

    }while(n < 1 || n > 200);

    //Leitura dos dados dos clientes a serem cadastrados
    cout<<"\nCadastre os "<<n<<" clientes\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o codigo: ";
        cin>>C[i].codigo;

        cout<<"\nInforme o email: ";
        fflush(stdin);
        gets(C[i].email);

        cout<<"\nInforme o numero de horas de acesso: ";
        cin>>C[i].horas;

    }

    //Calculo e escrita do valor da pagar de cada cliente
    cout<<"\n\nValor a pagar de cada cliente\n";
    for(i = 0; i < n; i++)
    {
        C[i].valor = 35.00;

        if(C[i].horas > 20)
            C[i].valor = C[i].valor + (C[i].horas - 20) * 2.5;

        cout<<"\nCodigo: "<<C[i].codigo;
        cout<<"\nEmail: "<<C[i].email;
        cout<<"\nValor a pagar: R$: "<<C[i].valor<<endl<<endl;
    }

    return 0;
}
