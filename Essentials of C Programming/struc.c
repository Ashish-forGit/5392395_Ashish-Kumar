//largest of 3 using structures
#include <stdio.h>
int main() {
    struct numbers {
        int a, b, c;
    } num;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num.a, &num.b, &num.c);

    if (num.a >= num.b && num.a >= num.c) {
        printf("Largest number is: %d\n", num.a);
    } else if (num.b >= num.a && num.b >= num.c) {
        printf("Largest number is: %d\n", num.b);
    } else {
        printf("Largest number is: %d\n", num.c);
    }

    return 0;
}