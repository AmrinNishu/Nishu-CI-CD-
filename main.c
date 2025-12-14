#include <stdio.h>
#include "sum.h"

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sum_of_even(n);
    printf("Sum of even numbers up to %d = %d\n", n, result);

    return 0;
}
