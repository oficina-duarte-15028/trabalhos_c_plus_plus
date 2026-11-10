#include <iostream>

using namespace std;
#define N 10

int main() {

   int soma = 0;
   int arrayNumrs[N];


   for (int i = 0; i < N; i++) {

    cout << "\nDiz num #" << i+1 << ": ";
    cin >> arrayNumrs[i];
   }
   cout << "\n\nResultado : 0 ";
   for (int i = 0; i < N; i++) {

    soma = arrayNumrs[i] * arrayNumrs[i];
   }
   cout << "\n\nO resultado final = " << soma;



    return 0;
}
