/*Faça um programa para ler os dados (nome, salário, estado civil, sexo, número de
dependentes, cidade e estado de residência) dos funcionários de uma empresa e mostrar
uma listagem de todos os dados dos funcionários(as) CASADOS(AS), residentes no RS
e com SALÁRIO acima de R$ 1.500,00. Cadastrar no máximo 200 funcionários.*/

#include <iostream>
#include <cstdio>

using namespace std;

struct dados
{
    char nome[50];
    float salario;
    char est_civil[50];
    char sexo;
    int n_dependentes;
    char cidade[50];
    char estado[3];
};

int main(){
    
}
