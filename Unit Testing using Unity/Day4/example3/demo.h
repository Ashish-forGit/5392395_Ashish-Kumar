#ifndef __DEMO_H
#define __DEMO_H
#include <stdio.h>

typedef struct {
    int age;
    float height;
} Person;

void initialize_person(Person *p, int age, float height);
void update_age(Person *p, int new_age);
int is_adult(const Person *p);

#endif
