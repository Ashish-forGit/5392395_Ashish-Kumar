//find the grade of the student based on marks
#include <stdio.h>
int main() {
    int score =70;

    if (score>=90)
    {
        printf("Grade A\n");
    }else if (score>=80)
    {
        printf("Grade B\n");
    }else if (score>=70)
    {
        printf("Grade C\n");
    }else if (score>=60)
    {
        printf("Grade D\n");
    }

    return 0;
}