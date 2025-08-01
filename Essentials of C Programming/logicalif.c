#include<stdio.h>
int main(){
    int age;
    char licence;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a driving licence? (y/n): ");
    scanf(" %c", &licence);
    if(age >= 18 && licence == 'y') {
        printf("You are eligible to drive.\n");
    } else if(age >= 18 && licence == 'n') {
        printf("You are old enough to drive, but you need a driving licence.\n");
    }else if(age < 18) {
        printf("You are not old enough to drive.\n");
    } else {
        printf("You need a driving licence to drive.\n");
    }
}