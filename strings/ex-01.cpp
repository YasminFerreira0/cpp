#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str[50];
    cout<<"Digite uma frase em maiusculo: ";
    gets(str);
    strlwr(str);
    cout<<str;
    return 0;
}
