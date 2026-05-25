#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int best_score = -1;

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
            if (best_score == -1 || attempts < best_score)
                best_score = attempts;
            return attempts;
        } else if (guess < target) {
            printf("Too low\n");
        } else {
            printf("Too high\n");
        }
    }
}

int get_difficulty() {
    int choice;
    printf("Difficulty:\n1. Easy (1-50)\n2. Medium (1-100)\n3. Hard (1-500)\n");
    printf("Choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: return 50;
        case 2: return 100;
        case 3: return 500;
        default: return 100;
    }
}

int main() {
    srand(time(NULL));
    char again;
    do {
        int max_val = get_difficulty();
        play_round(max_val);
        if (best_score > 0)
            printf("Best score: %d\n", best_score);
        printf("Play again? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
    return 0;
}
