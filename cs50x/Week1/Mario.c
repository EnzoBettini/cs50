#include <stdio.h>
#include <stdlib.h>


int main(){

    int height;
    do
    {
        printf("Enter the height of the pyramid: ");
        scanf("%d", &height);
    }
    while (height>8 || height<1);

    for (int h=0; h<height; h++)
    {
        for (int r=0; r<height; r++)
        {
            if(r>=height-1-h)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }

        }
       
        printf("\n");
    }
    printf("Pressione Enter para sair...");
    getchar(); // Captura o '\n' deixado pelo scanf
    getchar(); // Espera o usuário pressionar Enter

    return 0;
}