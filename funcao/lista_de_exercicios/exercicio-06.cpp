/*A corretora Segtotal conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel
de acordo com o cargo, conforme tabela abaixo. Para isso, fa�a um programa contendo
uma fun��o para receber, por par�metro, o sal�rio e o c�digo do cargo de um
funcion�rio, e calcular e mostrar o seu sal�rio reajustado. Se o cargo do funcion�rio
n�o estiver na tabela, ele dever�, ent�o, receber 35,5% de aumento.
    C�digo Cargo Percentual
    91 Gerente 10%
    92 Analista 20%
    93 T�cnico 30%*/

#include <iostream>
using namespace std;

void reajuste(float salario, int codigo){
    switch (codigo){
        case 91:
            salario = salario * 1.1;
        break;
        case 92:
            salario = salario * 1.2;
        break;
        case 93:
            salario = salario * 1.3;
        break;
        default:
            salario = salario * 1.355;
        break;
    }

    cout<<"Salario com reajuste: "<<salario;

}

int main (){
    float salario;
    int codigo;

    cout<<"Informe o salario do funcionario: ";
    cin>>salario;

    cout<<"Informe o codigo do funcionario: ";
    cin>>codigo;

    reajuste(salario, codigo);

    return 0;
}
