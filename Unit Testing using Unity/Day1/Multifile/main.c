#include<stdio.h>
#include "demo.h"

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int c = sum(a, b);
    int d = square(a);
    int e = differ(a, b);
    int f = product(a, b);
    int g = divide(a, b);

    printf("Sum: %d\n", c);
    printf("Square of %d:\n", d);
    printf("Difference: %d\n", e);
    printf("Product: %d\n", f);
    printf("Division: %d\n", g);
    return 0;
}