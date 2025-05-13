#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char *string;

    printf("Digite o nome a ser escolhido: ");
    scanf("%s", string);

    printf("\n%s\n", string);

    getch();
    return 0;
}
