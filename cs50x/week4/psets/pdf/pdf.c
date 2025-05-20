#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("low on arguments\n");
        return 1;
    }

    FILE *input = fopen(argv[1], "rb"); // Correção aqui
    if (input == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    uint8_t buffer[4];
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46}; // "%PDF"

    if (fread(buffer, sizeof(uint8_t), 4, input) != 4) {
        printf("Erro na leitura do arquivo\n");
        fclose(input);
        return 1;
    }

    fclose(input);

    for (int i = 0; i < 4; i++) {
        if (signature[i] != buffer[i]) {
            printf("Este não é um PDF!\n");
            return 0;
        }
    }

    printf("O arquivo é um PDF válido.\n");
    return 0;
}
