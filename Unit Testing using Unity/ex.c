#include<stdio.h>
int sum(int a, int b) {
    return a + b;
}   

int squre(int a) {
    return a * a;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
     int d = squre(5);
    printf("Sum: %d\n", sum(a, b));
    printf("Square of 5: %d\n", d);
    return 0;
}