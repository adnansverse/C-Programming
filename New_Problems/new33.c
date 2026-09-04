#include <stdio.h>

int main() {
    int ct1, ct2, ct3, midterm;
    float assignment;

    // Input: ৩টি CT, ১টি Midterm, ১টি Assignment
    scanf("%d %d %d %d %f", &ct1, &ct2, &ct3, &midterm, &assignment);

    // (float) দিয়ে Explicit Type Conversion করা হলো যেন দশমিক বাদ না পড়ে
    float ct_avg = (float)(ct1 + ct2 + ct3) / 3.0;

    // Final Score এর হিসাব
    float final_score = (ct_avg * 0.35) + (midterm * 0.25) + (assignment * 0.40);

    // Output (দশমিকের পর ২ ঘর পর্যন্ত)
    printf("CT average: %.2f\n", ct_avg);
    printf("Final score: %.2f\n", final_score);

    return 0;
}
