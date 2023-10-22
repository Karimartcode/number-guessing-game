#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess;
    printf("Guess a number between 1 and 100: ");
    scanf("%d", &guess);
    if (guess == target)
        printf("Correct!\n");
    else
        printf("Wrong! It was %d\n", target);
    return 0;
}
