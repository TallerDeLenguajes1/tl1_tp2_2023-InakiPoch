#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main() {
    double vector[N];
    double *pVector = vector;
    srand(time(NULL));
    for(int i = 0; i < N ; i++) {
        *pVector = rand()%100 + 1;
        printf("%.4f\n",*pVector);
        pVector++;
    }
    return 0;
}