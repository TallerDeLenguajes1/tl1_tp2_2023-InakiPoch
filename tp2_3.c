#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 7
#define N 5

int main() {
    double matrix[N][M];
    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        printf("\n");
        for(int j = 0; j < M; j++) {
            *(*(matrix + i) + j) = rand()%100 + 1;
            printf("%lf    ",*(*(matrix + i) + j));
        }
    }
    return 0;
}