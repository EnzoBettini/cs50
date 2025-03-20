#include <stdio.h>
#include <stdlib.h>

int main(){

    int cents, q, d, n, p, coins=0;

    do
    {
        printf("Enter the amount of change in cents: ");
        scanf("%d", &cents);
    } 
    while (cents<0);

    q=cents/25;
    cents=cents%25;
    d=cents/10;
    cents=cents%10;
    n=cents/5;
    cents=cents%5;
    p=cents;

    coins=q+d+n+p;

    printf("Coins: %d\n", coins);

    printf("Pressione Enter para sair...");
    getchar(); // Captura o '\n' deixado pelo scanf
    getchar(); // Espera o usuário pressionar Enter

    return 0;
}