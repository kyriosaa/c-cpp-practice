#include <stdio.h>

int main () {
    int x; // declaration
    x = 123; // initialization
    int y = 456; // declaration + initialization

    int age = 22; // integer
    float gpa = 3.19; // floating point number
    char grade = 'A'; // single character
    char name[] = "Kin"; // array of characters because C is not objec-oriented

    printf("Hello %s!\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is \"%c\"\n", grade);
    printf("Your GPA is %f\n", gpa);

    return 0;
}