#include <iostream>

using namespace std;

const int MAX_ALUNOS = 30;

int main () {

    int x =5;

    x = MAX_ALUNOS - x;

    if (x <= 20) {
        x = x + 13;
        x = x * 2;
    } else {
    x = x - 10;
    x = x / 5;
    }


    // se o numero x for <= 20 . . .
        //soma 13
        // multiplica x2

    // caso contrario . .
    //subtraia 10
    // divide por 5


    cout << (x);

    return 0;
}
