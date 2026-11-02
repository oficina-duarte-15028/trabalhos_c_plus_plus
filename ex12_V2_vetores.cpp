#include <iostream>
#include <string.h>

using namespace std;

int main() {



    char nome[31], primeiraletra =' ', segundaletra =' ';
     // até 30 letras + o '\0'
        printf("Nome: ");

        //scanf("%30s", nome); // SEM & - o nome do vetor já é um endereço

        cin.getline(nome, 31);

        printf("Ola, %s!\n", nome);

        printf("Ola, %c !\n", nome[01]);
        cout << "\nOla, " << nome[0] << "!\n";

        primeiraletra = nome[0];
        for(int i = 0; i<31; i++){
            segundaletra = nome[i+q;]
        }
        cout << "\n Letras: " << primeiraletra << segundaletra;


    return 0;
}



