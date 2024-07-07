#include <stdio.h>

int main() {
    char name[40];
    char fathers_name[40];
    char mothers_name[40];
    float gpa;
    char date_of_birth[20];
    char present_address[25];
    char permanent_address[25];
    char nationality[15];
    char religion[10];

    printf("enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("enter father's name: ");
    fgets(fathers_name, sizeof(fathers_name), stdin);
    printf("enter mother's name: ");
    fgets(mothers_name, sizeof(mothers_name), stdin);
    printf("enter gpa: ");
    scanf("%f", &gpa); // Using %f for float
    getchar(); // Consume the newline character left in the buffer
    printf("enter date of birth: ");
    fgets(date_of_birth, sizeof(date_of_birth), stdin);
    printf("enter present address: ");
    fgets(present_address, sizeof(present_address), stdin);
    printf("enter permanent address: ");
    fgets(permanent_address, sizeof(permanent_address), stdin);
    printf("enter nationality: ");
    fgets(nationality, sizeof(nationality), stdin);
    printf("enter religion: ");
    fgets(religion, sizeof(religion), stdin);

    printf("name: %s", name);
    printf("\nfather's name: %s", fathers_name);
    printf("\nmother's name: %s", mothers_name);
    printf("\ngpa: %.2f", gpa); // Printing GPA with two decimal places
    printf("\ndate of birth: %s", date_of_birth);
    printf("\npresent address: %s", present_address);
    printf("\npermanent address: %s", permanent_address);
    printf("\nnationality: %s", nationality);
    printf("\nreligion: %s", religion);

    return 0;
}