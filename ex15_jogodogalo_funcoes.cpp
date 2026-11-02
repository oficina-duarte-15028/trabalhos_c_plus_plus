#include <iostream>
#include <string.h>

using namespace std;


char grelha [9] ={ '0', '1', '2', '3', '4', '5', '6', '7', '8'};
void grelhaJogo (){
    int resultado;

    cout << "\n" << grelha[0] << "|" << grelha[1] << "|" << grelha[2];
    cout << "\n" << grelha[3] << "|" << grelha[4] << "|" << grelha[5];
    cout << "\n" << grelha[6] << "|" << grelha[7] << "|" << grelha[8];
    cout << "\nDiz onde queres jogar " << "\nR:";
    cin >> resultado;
}

    bool jogoTerminou = false, aceitaJogada;


int main() {

    string peca = "x";
    int posicao = 0;
    while ( jogoTerminou){
        aceitaJogada = true;



    grelhaJogo();
    cin >> posicao;
    break;
    }




   switch (posicao)
{
    case 0:
        if(grelha[0] == '0')
            grelha[0] = peca
            aceitaJogada = true
        break;

    case 1:
        if(grelha[1] == '1')
            grelha[1] = peca
            aceitaJogada = true
        break;

    case 2:
        if(grelha[2] == '2')
            grelha[2] = peca
            aceitaJogada = true
        break;

    case 3:
        if(grelha[3] == '3')
            grelha[3] = peca
            aceitaJogada = true
        break;

    case 4:
        if(grelha[4] == '4')
            grelha[4] = peca
            aceitaJogada = true
        break;

    case 5:
        if(grelha[5] == '5')
            grelha[5] = peca
            aceitaJogada = true
        break;

    case 6:
        if(grelha[6] == '6')
            grelha[6] = peca
            aceitaJogada = true
        break;

    case 7:
        if(grelha[7] == '7')
            grelha[7] = peca
            aceitaJogada = true
        break;

    case 8:
        if(grelha[8] == '8')
            grelha[8] = peca
            aceitaJogada = true
        break;

    }




    return 0;
}



