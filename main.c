#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int play_round(int max_val) {
    int target = rand() % max_val + 1;
    int guess, attempts = 0;
    printf("Guess a number between 1 and %d\n", max_val);
    while (1) {
        printf("Your guess: ");
        scanf("%d", &guess);
        if (guess < 1 || guess > max_val) {
            printf("Out of range\n");
            continue;
        }
        attempts++;
        if (guess == target) {
            printf("Correct! Attempts: %d\n", attempts);
            return attempts;
        } else if (guess < target) {
            printf("Too low\n");
        } else {
            printf("Too high\n");
        }
    }
}

int main() {
    srand(time(NULL));
    play_round(100);
    return 0;
}
