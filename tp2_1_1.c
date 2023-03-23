#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main() {
    double vector[N];
    srand(time(NULL));
    for(int i = 0; i < N ; i++) {
        vector[i] = rand()%100 + 1;
        printf("%.4f\n",vector[i]);
    }
    return 0;
}