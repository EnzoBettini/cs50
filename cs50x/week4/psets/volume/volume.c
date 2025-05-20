// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

typedef uint8_t BYTE;
typedef int16_t SAMPLE;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "rb");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "wb");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file

    BYTE b;
    int bytesRead = 0;

    while (bytesRead < HEADER_SIZE)
    {
        // primeiro lê 1 byte do input
        if (fread(&b, sizeof(b), 1, input) != 1)
        {
            fprintf(stderr, "Erro ao ler header.\n");
            return 1;
        }
        // depois escreve esse mesmo byte no output
        fwrite(&b, sizeof(b), 1, output);
        bytesRead++;
    }

    // TODO: Read samples from input file and write updated data to output file

    SAMPLE s;
    fseek(input, HEADER_SIZE, SEEK_SET);
    while(fread(&s, sizeof(s), 1, input) != 0) //&b reads the byte
    {
        s = (SAMPLE)(s * factor);
        fwrite(&s, sizeof(s), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);
}
