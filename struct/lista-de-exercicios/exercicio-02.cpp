/*Faça um programa para ler os dados (nome, salário, estado civil, sexo, número de
dependentes, cidade e estado de residência) dos funcionários de uma empresa e mostrar
uma listagem de todos os dados dos funcionários(as) CASADOS(AS), residentes no RS
e com SALÁRIO acima de R$ 1.500,00. Cadastrar no máximo 200 funcionários.*/

#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
    char nome[50];
    float salario;
    char est_civil[20];
    char sexo;
    int n_dependentes;
    char cidade[50];
    char estado[3];
};

int main(){
    dados func[200];
    int i, cont;

    cout<<"Quantos funcionarios deseja cadastrar? (maximo 200): ";
    cin>>cont;

    cout<<"Informe os dados dos funcionarios"<<endl;

    for (i=0; i<cont; i++){
        cout<<"Funcionario "<<i +1<<": "<<endl;
        cout<<"Nome: ";
        cin>>func[i].nome;
        cout<<"Salario: ";
        cin>>func[i].salario;
        cout<<"Estado Civil: ";
        cin>>func[i].est_civil;
        cout<<"Sexo (M, F): ";
        cin>>func[i].sexo;
        cout<<"Numero de dependencias: ";
        cin>>func[i].n_dependentes;
        cout<<"Cidade: ";
        cin>>func[i].cidade;
        cout<<"Estado: ";
        cin>>func[i].estado;
        cout<<endl<<endl;
    }

    cout<<"funcionarios(as) CASADOS(AS), residentes no RS e com salario acima de R$ 1.500,00."<<endl;

    for(i=0; i<cont; i++){
        if(strcmp(func[i].est_civil, "casado") == 0 && strcmp(func[i].estado, "RS") == 0 && func[i].salario > 1500){
            cout<<"Funcionario"<<endl;
            cout<<"Nome: "<<func[i].nome<<endl;
            cout<<"Salario: "<<func[i].salario<<endl;
            cout<<"Estado Civil: "<<func[i].est_civil<<endl;
            cout<<"Sexo (M, F): "<<func[i].sexo<<endl;
            cout<<"Numero de dependencias: "<<func[i].n_dependentes<<endl;
            cout<<"Cidade: "<<func[i].cidade<<endl;
            cout<<"Estado: "<<func[i].estado<<endl;
            cout<<endl;
        }
    }
    return 0;
}

