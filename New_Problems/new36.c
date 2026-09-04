#include <stdio.h>

int main() {
    int i = 1;        // কাউন্টার ভ্যারিয়েবল
    int sum = 0;      // যোগফল জমা রাখার ভ্যারিয়েবল

    while (i <= 50) {
        sum = sum + i;  // বর্তমান মানটি sum-এর সাথে যোগ করা হচ্ছে
        i++;            // মান ১ করে বাড়ানো হচ্ছে
    }

    printf("1 to 50 sum: %d\n", sum);

    return 0;
}
