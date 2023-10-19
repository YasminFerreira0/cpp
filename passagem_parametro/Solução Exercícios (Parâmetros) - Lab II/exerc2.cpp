#include <iostream>
#include <string.h>
using namespace std;

//Protótipo da Função
int tempo_jogo( int hi, int mi, int ht, int mt);

//Função Principal
int main ()
{
    //Declaração de variáveis
    int horas_inicio, minutos_inicio, horas_termino, minutos_termino, duracao;

    //Leitura da Informações
    cout<<"\nInforme a hora de inicio do jogo ";
    cin>>horas_inicio;

    cout<<"\nInforme os minutos de inicio do jogo ";
    cin>>minutos_inicio;

    cout<<"\nInforme a hora de termino do jogo ";
    cin>>horas_termino;

    cout<<"\nInforme os minutos de termino do jogo ";
    cin>>minutos_termino;

    //Chamada da função para calcula o tempo de duração do jogo
    duracao = tempo_jogo(horas_inicio, minutos_inicio, horas_termino, minutos_termino);

    //Escrita do tempo do jogo em minutos
    cout<<"\nDuracao do jogo em minutos: "<<duracao<<endl;

    return 0;
}

//Função que calcula do tempo de duração do jogo
int tempo_jogo( int hi, int mi, int ht, int mt)
{
    float dh, dm;

    //calcula a duração de horas do jogo
    if(ht >= hi)
        dh = ht - hi;
    else
        dh = 24 - hi + ht;

    //Calcula a duração de minutos do jogo
    if(mt >= mi)
        dm = mt - mi;
    else
    {
        dm = 60 - mi + mt;
        dh = dh - 1;
    }

    return dh * 60 + dm; //Retorna a duração apenas em minutos
}
