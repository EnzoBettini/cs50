

//GOES ONE BY ONE

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i;
            break; // Stop searching once we find the element
        }
    }

    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
