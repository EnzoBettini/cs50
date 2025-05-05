#include <stdio.h>
#include <cs50.h>

void draw(int n){
    int i, j;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("#");
        }
    }
}

int main (){
    int height = get_int("Height: ")
    draw(height);

    return 0;
}
