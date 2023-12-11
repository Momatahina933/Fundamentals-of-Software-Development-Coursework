
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    int student_id, last_digit;

    printf("Enter your student ID: ");
    scanf("%d", &student_id);
    printf("Enter your password: ");
    scanf("%s", password);

    last_digit = student_id % 10;

    if (last_digit % 2 != 0) {
        if (strcmp(password, "L$$555ee") == 0) {
            printf("Password complies with the specified rules.\n");
        } else {
            printf("Password does not comply with the specified rules.\n");
        }
    } else {
        printf("Last digit of student ID is even, password compliance not required.\n");
    }

    return 0;
}
