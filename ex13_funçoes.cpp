#include <iostream>
#include <string.h>

using namespace std;

 void menu(){
    cout << "Escolhe uma opcao 1 ou 2: \n";
    cout << "1 - Ano atual \n",
    cout << "2 - Sair do programa \n";
    cout << "R: ";
}
int getYear(){
    return 2026;
}

int main() {
    int escolha;

    menu();
    cin >> escolha;

    if (escolha==1) {
    cout << getYear();
    }
    else {
    }





    return 0;
}



