#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>


int main(){
    char *s = get_String("s: ");

    char *t = malloc(strlen(s) + 1);

    if (t = NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    free(t);
    return 0;
}
