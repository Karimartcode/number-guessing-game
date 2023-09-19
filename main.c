#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    printf("Guess a number between 1 and 100\n");
    return 0;
}
