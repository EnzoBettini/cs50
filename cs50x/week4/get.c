#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%i", &n);

    printf("n: %i\n", n);

    char *s; //dangerous
    printf("s: ");
    scanf("%s", s);

    printf("s: %s\n", s);
}
