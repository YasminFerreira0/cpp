/*Fecha um arquivo aberto anteriormente.*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{

    FILE *p;
    p = fopen ("exemplo.txt","r");
    if (p == NULL)

    cout << "Erro na abertura!" << endl;

    else

    cout << "\nArquivo Aberto com Sucesso!\n";

    fclose(p);
    return 0;

}
