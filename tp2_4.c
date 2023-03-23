#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char cpuTypes[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct Computer {
    unsigned int processVelocity;
    unsigned int fabricationYear;
    char* cpuType;
    unsigned int numberCores;
};

typedef struct Computer PC;

void initiateComputers(PC* computer);
void showPCs(PC* computer);
void showOlder(PC* computer);
void showHigherVelocity(PC* computer);

int main() {
    PC computers[5];
    srand(time(NULL));
    initiateComputers(computers);
    showPCs(computers);
    showOlder(computers);
    showHigherVelocity(computers);
    return 0;
}

void initiateComputers(PC* computer) {
    for(int i = 0; i < 5; i++) {
        computer->processVelocity = (int)(rand()%3 + 1);
        computer->fabricationYear = (int)(rand()%9 + 2015);
        computer->cpuType = cpuTypes[(int)rand()%6];
        computer->numberCores = (int)(rand()%8 + 1);
        computer++;
    }
}

void showPCs(PC* computer) {
    for(int i = 0; i < 5; i++) {
        printf("\n-------PC %d--------",i+1);
        printf("\nVelocidad: %d",computer->processVelocity);
        printf("\nAnio de fabricacion: %d",computer->fabricationYear);
        printf("\nTipo de CPU: %s",computer->cpuType);
        printf("\nCantidad de nucleos: %d",computer->numberCores);
        computer++;
    }
}

void showOlder(PC* computer) {
    unsigned int olderAge = 20000;
    PC* olderComputer;
    for(int i = 0; i < 5; i++) {
        if(computer->fabricationYear <= olderAge) {
            olderAge = computer->fabricationYear;
            olderComputer = computer;
        }
        computer++;
    }
    printf("\n-------PC mas vieja--------");
    printf("\nVelocidad: %d",olderComputer->processVelocity);
    printf("\nAnio de fabricacion: %d",olderComputer->fabricationYear);
    printf("\nTipo de CPU: %s",olderComputer->cpuType);
    printf("\nCantidad de nucleos: %d",olderComputer->numberCores);
}

void showHigherVelocity(PC* computer) {
    unsigned int higherVelocity = 20000;
    PC* higherComputer;
    for(int i = 0; i < 5; i++) {
        if(computer->fabricationYear <= higherVelocity) {
            higherVelocity = computer->processVelocity;
            higherComputer = computer;
        }
        computer++;
    }
    printf("\n-------PC de mayor velocidad--------");
    printf("\nVelocidad: %d",higherComputer->processVelocity);
    printf("\nAnio de fabricacion: %d",higherComputer->fabricationYear);
    printf("\nTipo de CPU: %s",higherComputer->cpuType);
    printf("\nCantidad de nucleos: %d",higherComputer->numberCores);
}

