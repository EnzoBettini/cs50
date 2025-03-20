/* #include <ctype.h>
#include "cs50.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    int letter=0, word=0, sentence=0, index=0, lenght;
    float fletter=0, fsentence=0;
    do
    {
        lenght=0;
        string text = get_string("Text: ");
        lenght = strlen(text);
    }
    while(text[1]==' ' && text[lenght]<1 && text[lenght]== ' ');



    // Count the number of letters, words, and sentences in the text
    for(int i=0; i<lenght; i++)
    {
        if(isalpha(text[i]))
        {
            letter++;
        }
        else if (isblank(text[i]))
        {
            word++;
            if(isblank(text[i+1]))
            {
                word--;
            }
        }
        else if (ispunct(text[i]))
        {
            sentence++;
            if(ispunct(text[i+1]))
            {
                sentence--;
            }
        }
    }

    // Compute the Coleman-Liau index
    fsentence= (sentence/word)*100;
    fletter= (letter/word)*100;

    index = 0.0588 * fletter - 0.296 * fsentence - 15.8;

    index=round(index);
    // Print the grade level
    printf("%i\n", index);
    getchar();
    return 0;
}
*/