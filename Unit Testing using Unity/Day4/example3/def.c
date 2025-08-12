#include "demo.h"
#include <stdlib.h>

void initialize_person(Person *p, int age, float height) {
    if (p != NULL) {
        p->age = age;
        p->height = height;
    } else {
        return;
    }
}

void update_age(Person *p, int new_age) {
    if (p == NULL) {
        return;
    }
    p->age = new_age;
}

int is_adult(const Person *p) {
    if (p == NULL) {
        return 0;
    }
    return p->age >= 18;
}
