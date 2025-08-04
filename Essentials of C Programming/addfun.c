//a fun to add two numbers
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main(){
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = add(num1, num2);
    printf("The sum is: %d\n", result);
    return 0;
}