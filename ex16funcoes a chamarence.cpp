#include <iostream>

using namespace std;

int fatorial(int numero){
    if (numero == 1 || numero == 0 ){
        return 1;
    }else {
        return numero * fatorial(numero - 1);
    }
}

int main() {
    int n = 5;

    cout << fatorial(n);



    return 0;
}



