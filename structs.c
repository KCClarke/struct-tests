#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height; // in inches
};

int main() {
    struct Person kasey = {"Kasey", 35, 71.0}; // 5 foot 11 inches is 71 inches

    printf("Name: %s\n", kasey.name);
    printf("Age: %d\n", kasey.age);
    printf("Height: %.1f inches\n", kasey.height);

    return 0;
}
