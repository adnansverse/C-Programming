#include <stdio.h>

int main() {
    /*
    Problem 6:
    Write a program (WAP) for the described scenario:
    Player-1 picks a number X and Player-2 has to guess that number within N tries.
    For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!”
    If Player-2 at any time successfully guesses the number, the program prints
    “Right, Player-2 wins!” and terminates right away. Otherwise after the completion
    of N wrong tries, the program prints “Player-1 wins!” and halts.
    (Hint: Use break/continue)
    */

    int x, n, guess;

    printf("Enter X and N: ");
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &guess);

        if (guess == x) {
            printf("Right, Player-2 wins!");
            break;
        }

        printf("Wrong, %d Choice(s) Left!\n", n - i);

        if (i == n) {
            printf("Player-1 wins!");
        }
    }

    return 0;
}
