#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Definição da estrutura
struct Funcionarios{
    char nome[30], ec[10], sexo[15], cidade[30], uf[3];
    float salario;
    int np; };

int main ()
{
    Funcionarios F[200]; //Declaração do vetor do tipo estrutura
    int n, i;

    //Leitura da quantidade de registros
    do{
        cout<<"\nInforme a quantidade de registros a serem cadastrados ";
        cin>>n;
        if(n < 1 || n > 200)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 200\n";
    }while(n < 1 || n > 200);

    //Leitura dos dados dos funcionarios a serem cadastrados
    cout<<"\nCadastre os "<<n<<" funcionarios\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o nome do funcionario: ";
        fflush(stdin);
        gets(F[i].nome);

        cout<<"\nInforme o estado civil: ";
        fflush(stdin);
        gets(F[i].ec);

        cout<<"\nInforme o sexo: ";
        fflush(stdin);
        gets(F[i].sexo);

        cout<<"\nInforme a cidade: ";
        fflush(stdin);
        gets(F[i].cidade);

        cout<<"\nInforme o estado: ";
        gets(F[i].uf);

        cout<<"\nInforme o salario: ";
        cin>>F[i].salario;

        cout<<"\nInforme o numero de dependentes: ";
        cin>>F[i].np;
    }


    //Escrita dos registros encontrados
    cout<<"\nRegistros dos funcionarios Casados, residentes no RS e com salario acima de R$ 1.500,00\n\n";
    for(i = 0; i < n; i++)
    {
        if(strcmpi(F[i].ec, "Casado") == 0 && strcmpi(F[i].uf, "RS") == 0 && F[i]. salario > 1500.00)
        {
            cout<<"\nNome: "<<F[i].nome;
            cout<<"\nSexo: "<<F[i].sexo;
            cout<<"\nCidade: "<<F[i].cidade;
            cout<<"\nNumero de dependentes: "<<F[i].np<<endl<<endl;
        }
    }

    return 0;
}
