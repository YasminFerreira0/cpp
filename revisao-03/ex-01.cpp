#include <iostream>
using namespace std;

int main ()
{
    int vet[10], vetX[10], i, j;

    cout<<"Invorme os valores do vetor."<<endl;
    for(i=0; i<10; i++){
        cin>>vet[i];
    }

    for(i=0, j=9; i<10; i++, j--){
        vetX[i] = vet[j];
    }

    cout<<"Os valores do vetor invertidos sao: "<<endl;
    for(i=0; i<10; i++){
        cout<<" "<<vetX[i];
    }

}
