/*#include <stdio.h>

#include <cs50.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>






int main(int argc, string argv[]){




    if (argc!=2)

    {

        printf("Usage: ./caesar key\n");

        return 1;

    }




    int l = strlen(argv[1]);




    for(int i=0; i<l; i++)

    {

        if(isdigit(argv[1][i])==0)

        {

            printf("Usage: ./caesar key\n");

            return 1;

        }

    }




    int key = atoi(argv[1]);




    string text = get_string("Text to Cypher\n");




    int length = strlen(text);




    for (int i = 0; i < length; i++) {

        if (isalpha(text[i]))
        {

            if (islower(text[i]))
            {
                text[i] = (text[i] - 'a' + key) % 26 + 'a';
            }
            else if (isupper(text[i]))
            {
               text[i] = (text[i] - 'A' + key) % 26 + 'A';
            }
        }
    }

    printf("ciphertext: %s", text);









    return 0;

}

*/
