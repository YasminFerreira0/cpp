#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

    /*a função fopen() cria um
arquivo chamado exemplo.txt, onde poderão
ser realizadas operações de escrita (gravação),
pois foi utilizado o modo de abertura “w”.*/

    FILE *p;
    p = fopen ("exemplo.txt","w");
    if (p == NULL)

    cout << "Erro na abertura do arquivo. Fim de programa!";

    else

    cout << "\nArquivo Criado com Sucesso!\n";

    return 0;

}
