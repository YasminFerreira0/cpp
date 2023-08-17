#include <iostream>
using namespace std;

int main ()
{
    int mat[5][5], x, i, j;

    cout<<"Informe os valores da matriz."<<endl;

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<"coluna "<<i+1<<", linha "<<j+1<<": ";
            cin>>mat[i][j];
        }
    }

    cout<<"Informe um valor para x: ";
    cin>>x;

    for (i=0; i<5; i++){
        mat[i][3] = mat[i][3] * x;
    }

    cout<<"Matriz modificada: "<<endl;
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<" "<<mat[i][j];
        }
    }
}
