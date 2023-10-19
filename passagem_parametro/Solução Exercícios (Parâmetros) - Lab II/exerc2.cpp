#include <iostream>
#include <string.h>
using namespace std;

//Prot�tipo da Fun��o
int tempo_jogo( int hi, int mi, int ht, int mt);

//Fun��o Principal
int main ()
{
    //Declara��o de vari�veis
    int horas_inicio, minutos_inicio, horas_termino, minutos_termino, duracao;

    //Leitura da Informa��es
    cout<<"\nInforme a hora de inicio do jogo ";
    cin>>horas_inicio;

    cout<<"\nInforme os minutos de inicio do jogo ";
    cin>>minutos_inicio;

    cout<<"\nInforme a hora de termino do jogo ";
    cin>>horas_termino;

    cout<<"\nInforme os minutos de termino do jogo ";
    cin>>minutos_termino;

    //Chamada da fun��o para calcula o tempo de dura��o do jogo
    duracao = tempo_jogo(horas_inicio, minutos_inicio, horas_termino, minutos_termino);

    //Escrita do tempo do jogo em minutos
    cout<<"\nDuracao do jogo em minutos: "<<duracao<<endl;

    return 0;
}

//Fun��o que calcula do tempo de dura��o do jogo
int tempo_jogo( int hi, int mi, int ht, int mt)
{
    float dh, dm;

    //calcula a dura��o de horas do jogo
    if(ht >= hi)
        dh = ht - hi;
    else
        dh = 24 - hi + ht;

    //Calcula a dura��o de minutos do jogo
    if(mt >= mi)
        dm = mt - mi;
    else
    {
        dm = 60 - mi + mt;
        dh = dh - 1;
    }

    return dh * 60 + dm; //Retorna a dura��o apenas em minutos
}
