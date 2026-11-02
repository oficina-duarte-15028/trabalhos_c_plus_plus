#include <iostream>

using namespace std;

int fatorial(int numero){
    if (numero == 1 || numero == 0 ){
        return 1;
    }else {
        return numero * fatorial(numero - 1);
    }
}

int fibonacci(int numero){
    if (numero == 1 || numero == 2 ){
        return 1;
    }else {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}

int main() {

    int n = 6;
    cout << fibonacci(n);

    return 0;
}



