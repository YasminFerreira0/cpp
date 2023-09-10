#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Definição da estrutura
struct Livro{
    int codigo;
    char doacao, obra[50], autor[30], editora[30]; };

int main ()
{
    Livro E[500], H[500], B[500]; //Declaração dos vetores do tipo estrutura
    int qe, qh, qb, i, cod;
    char area[15];

    //Leitura da quantidade de livros de exatas
    do{
        cout<<"\n\nInforme a quantidade de livros de Exatas a serem cadastrados ";
        cin>>qe;
        if(qe < 1 || qe > 500)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 500\n";
    }while(qe < 1 || qe > 500);

    //Leitura dos dados dos livros de exatas a serem cadastrados
    cout<<"\nCadastro dos livros de Exatas\n";
    for(i = 0; i < qe; i++)
    {
        cout<<"\n\nInforme o codigo de catalogacao: ";
        cin>>E[i].codigo;

        cout<<"\nInforme se e doacao (S - sim, N - nao) ";
        cin>>E[i].doacao;

        cout<<"\nInforme o nome da obra: ";
        fflush(stdin);
        gets(E[i].obra);

        cout<<"\nInforme o nome do autor: ";
        fflush(stdin);
        gets(E[i].autor);

        cout<<"\nInforme o nome da editora: ";
        fflush(stdin);
        gets(E[i].editora);
    }

    //Leitura da quantidade de livros de humanas
    do{
        cout<<"\n\nInforme a quantidade de livros de Humanas a serem cadastrados ";
        cin>>qh;
        if(qh < 1 || qh > 500)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 500\n";
    }while(qh < 1 || qh > 500);

    //Leitura dos dados dos livros de humanas a serem cadastrados
    cout<<"\nCadastro dos livros de Humanas\n";
    for(i = 0; i < qh; i++)
    {
        cout<<"\n\nInforme o codigo de catalogacao: ";
        cin>>H[i].codigo;

        cout<<"\nInforme se e doacao (S - sim, N - nao) ";
        cin>>H[i].doacao;

        cout<<"\nInforme o nome da obra: ";
        fflush(stdin);
        gets(H[i].obra);

        cout<<"\nInforme o nome do autor: ";
        fflush(stdin);
        gets(H[i].autor);

        cout<<"\nInforme o nome da editora: ";
        fflush(stdin);
        gets(H[i].editora);
    }

    //Leitura da quantidade de livros de biologicas
    do{
        cout<<"\n\nInforme a quantidade de livros de Biologicas a serem cadastrados ";
        cin>>qb;
        if(qb < 1 || qb > 500)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 500\n";
    }while(qb < 1 || qb > 500);

    //Leitura dos dados dos livros de biologicas a serem cadastrados
    cout<<"\nCadastro dos livros de Biologicas\n";
    for(i = 0; i < qb; i++)
    {
        cout<<"\n\nInforme o codigo de catalogacao: ";
        cin>>B[i].codigo;

        cout<<"\nInforme se e doacao (S - sim, N - nao) ";
        cin>>B[i].doacao;

        cout<<"\nInforme o nome da obra: ";
        fflush(stdin);
        gets(B[i].obra);

        cout<<"\nInforme o nome do autor: ";
        fflush(stdin);
        gets(B[i].autor);

        cout<<"\nInforme o nome da editora: ";
        fflush(stdin);
        gets(B[i].editora);
    }

    //Consulta dos livros informados pelo usuário
    do{
        cout<<"\n\n\nInforme o codigo do livro a ser buscado: ";
        cin>>cod;

        if(cod != 1)
        {
            cout<<"\n\nInforme a area do livro: ";
            fflush(stdin);
            gets(area);

            if(strcmpi(area, "Exatas") == 0)
            {
                //Localizando o livro da area exatas
                i = 0;
                while(i < qe && E[i].codigo != cod)
                    i++;

                //Escrita das informações do livro
                if(i < qe)
                {
                    cout<<"\n\nNome da obra: "<<E[i].obra;
                    cout<<"\n\nNome do autor: "<<E[i].autor;
                    cout<<"\n\nDoacao: "<<E[i].doacao;
                    cout<<"\n\nNome da editora: "<<E[i].editora;
                }
                else
                    cout<<"\n\nObra nao Encontrada!\n";

            }
            else
            {
                if(strcmpi(area, "Humanas") == 0)
                {
                    //Localizando o livro da area humanas
                    i = 0;
                    while(i < qh && H[i].codigo != cod)
                        i++;

                    //Escrita das informações do livro
                    if(i < qh)
                    {
                        cout<<"\n\nNome da obra: "<<H[i].obra;
                        cout<<"\n\nNome do autor: "<<H[i].autor;
                        cout<<"\n\nDoacao: "<<H[i].doacao;
                        cout<<"\n\nNome da editora: "<<H[i].editora;
                    }
                    else
                        cout<<"\n\nObra nao Encontrada!\n";

                }
                else
                {
                    if(strcmpi(area, "Biologicas") == 0)
                    {
                        //Localizando o livro da area biologicas
                        i = 0;
                        while(i < qb && B[i].codigo != cod)
                            i++;

                        //Escrita das informações do livro
                        if(i < qb)
                        {
                            cout<<"\n\nNome da obra: "<<B[i].obra;
                            cout<<"\n\nNome do autor: "<<B[i].autor;
                            cout<<"\n\nDoacao: "<<B[i].doacao;
                            cout<<"\n\nNome da editora: "<<B[i].editora;
                        }
                        else
                            cout<<"\n\nObra nao Encontrada!\n";

                    }
                    else
                        cout<<"\n\nArea nao Encontrada!\n";
                }
            }

        }
        else
            cout<<"\n\nBusca Finalizada!\n";
    }while(cod != 1);


    return 0;
}
