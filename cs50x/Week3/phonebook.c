#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(){

    string names[] = {"Yullia", "David", "Jhon"};
    string numbers[]= {"12345", "129765", "763429"};

    string name = get_string("Name: ");
    for (int i=; i<3; i++){
        if (strcmp(name[i], name) == 0){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}
