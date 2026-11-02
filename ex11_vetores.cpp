#include <iostream>

using namespace std;

int main() {

    const int N = 5;
    int nota[N], soma = 0;
    for (int i = 0; i < N; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%d", &nota[i]);
        soma += nota[i];
    }
    printf("Media: %.1f\n", (float)(soma / (float)N));


}



