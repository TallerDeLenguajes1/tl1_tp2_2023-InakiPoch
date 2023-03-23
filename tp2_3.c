#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 7
#define N 5

int main() {
    int matrix[N][M];
    srand(time(NULL));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            matrix[i][j] = rand()%100 + 1;
            printf("%lf\n",matrix[i][j]);
        }
    }
    return 0;
}