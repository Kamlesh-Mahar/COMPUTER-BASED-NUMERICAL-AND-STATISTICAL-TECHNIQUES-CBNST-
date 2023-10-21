#include <stdio.h>

int main() {
    float t, a, relative_error, absolute_error, percentage_error;

    printf("ENTER TRUE VALUE :- ");
    scanf("%f", &t);

    printf("ENTER ABSOLUTE VALUE :- ");
    scanf("%f", &a);

    absolute_error = t - a;
    relative_error = absolute_error / t;
    percentage_error = relative_error * 100;

    printf("Absolute error :- %f\n", absolute_error);
    printf("Relative error :- %f\n", relative_error);
    printf("Percentage error :- %f\n", percentage_error);
}
