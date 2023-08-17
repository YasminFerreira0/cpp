#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[25], str2[25], str3[50];
    cout<<"Informe a primeira string: ";
    gets(str1);

    cout<<"Informe a segunda string: ";
    gets(str2);

    strcat(str1,str2);
    cout<<str1;
    cout<<str2;
    return 0;
}
