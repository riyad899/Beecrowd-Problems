#include<stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if(number > 0) {
        printf("positive\n");
    } else if(number < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
#include<stdio.h>

int main() {
    int mark;
    printf("Enter mark: ");
    scanf("%d", &mark);

    if (mark > 100 || mark < 0) {
        printf("Invalid mark\n");
    } else if (mark >= 80) {
        printf("A+\n");
    } else if (mark >= 70) {
        printf("A\n");
    } else if (mark >= 60) {
        printf("A-\n");
    } else if (mark >= 50) {
        printf("B\n");
    } else if (mark >= 40) {
        printf("C\n");
    } else if (mark >= 33) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}



