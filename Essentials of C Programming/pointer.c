#include<stdio.h>
// Pointer example
int main() {
    int var = 5;
    int *ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}