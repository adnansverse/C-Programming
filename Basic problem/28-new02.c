#include <stdio.h>

int main() {
    int X, Y;

    // X এবং Y এর মান ইনপুট নেওয়া
    scanf("%d %d", &X, &Y);

    // X এর সাথে Y যোগ (Increment) করা (X += Y)
    X += Y;
    printf("Incremented Value: %d\n", X);

    // পরিবর্তিত X এর মান থেকে Y বিয়োগ করা (X -= Y) যাতে মূল মান ফিরে পাওয়া যায়
    // এবং এরপর আবার Y বিয়োগ (Decrement) করা (X -= Y)
    X -= (2 * Y);
    printf("Decremented Value: %d\n", X);

    return 0;
}
