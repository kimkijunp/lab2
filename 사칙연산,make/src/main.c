#include <stdio.h>
#include "calculator.h"

int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %f\n", div(a, b));
    return 0;
}
