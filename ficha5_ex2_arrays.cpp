#include <iostream>

using namespace std;

int main() {

 int quantidadeSomarN;
    double numeros[100];
    double soma = 0.0;

    cout << "Quantos numeros deseja somar (maximo 100)? ";
    cin >> quantidadeSomarN;

    if (quantidadeSomarN > 100 || quantidadeSomarN <= 0) {
        cout << "Quantidade invalida!" << endl;
        return 1;
    }

    for (int i = 0; i < quantidadeSomarN; i++) {
        cout << "Insira o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < quantidadeSomarN; i++) {
        soma += numeros[i];
    }

    cout << "O resultado da soma e: " << soma << endl;

    return 0;
}
