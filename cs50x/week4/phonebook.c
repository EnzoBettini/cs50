#include <stdio.h>

int main() {
    FILE *phonebook = fopen("phonebook.csv", "a");
    if (phonebook == NULL) {
        printf("Error\n");
        return 1;
    }

    char name[100];
    char number[30];

    printf("Your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your number: ");
    fgets(number, sizeof(number), stdin);

    fprintf(phonebook, "%s,%s\n", name, number);
    fclose(phonebook);

    return 0;
}
