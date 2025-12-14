#include <stdio.h>
#include "even.h"

int main() {

    // Test cases
    if (isEven(2) != 1) {
        printf("Test failed for 2\n");
        return 1;
    }

    if (isEven(3) != 0) {
        printf("Test failed for 3\n");
        return 1;
    }

    if (isEven(10) != 1) {
        printf("Test failed for 10\n");
        return 1;
    }

    printf("All tests passed ✅\n");
    return 0;
}
