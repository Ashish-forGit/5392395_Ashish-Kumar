#include<stdio.h>
#include "demo.h"

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
     int d = square(5);
    printf("Sum: %d\n", sum(a, b));
    printf("Square of 5: %d\n", d);
    return 0;
}