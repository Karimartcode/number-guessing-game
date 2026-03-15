#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess, attempts = 0;
    printf("Guess a number between 1 and 100\n");
    while (1) {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess == target) {
            printf("Correct! Attempts: %d\n", attempts);
            break;
        } else if (guess < target) {
            printf("Too low\n");
        } else {
            printf("Too high\n");
        }
    }
    return 0;
}
