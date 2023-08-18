/**/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    char palavra[16];
    char palavra_inv[16];
    int i, j;

    cout<<"Informe uma pralavra com no maximo 15 caracteres: ";
    gets(palavra);

    for(i=0, j = strlen(palavra)-1; i<strlen(palavra); i++, j--){
        palavra_inv[j] = palavra[i];
    }

    if(strcmp(palavra,palavra_inv) == 0){
        cout<<"A palavra e um palindromo.";
    }else{
        cout<<"A palavra nao e um palindromo.";
    }
    return 0;
}
