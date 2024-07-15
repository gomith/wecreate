#include <stdio.h>

// Function to calculate factorial
int dfactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * sfactorial(n - 1)
    }
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
