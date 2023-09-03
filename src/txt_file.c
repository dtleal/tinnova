/********************************************************************
# Description: Cria um arquivo txt para insercao e leitura de caracteres
#
# Author: Diego
# Created at: Dom  3 Set 2023 15:17:41 -03
# Project: Tinnova
#
#********************************************************************/

#include <stdio.h>

#include "txt_file.h"

/* Create file to write */
FILE *open_file_for_writing(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return NULL;
    }
    return file;
}

/* Input characters to file */
void input_characters(FILE *file) {
    printf("Digite caracteres (0 para encerrar):\n");
    char character;
    while (1) {
        scanf(" %c", &character);
        if (character == '0')
            break;
        fputc(character, file);
    }
    fprintf(file, "\n");
}

/* Reopen file to read */
FILE *reopen_file_for_reading(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Não foi possível abrir o arquivo novamente.\n");
        return NULL;
    }
    return file;
}

/* Print file contents */
void print_file_contents(FILE *file) {
    printf("Conteúdo do arquivo:\n");
    int character;
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character);
    }
}

/* Main function */
int main(int argc, char **argv) {
    const char *filename = "arq.txt"; /* Arquivo default criado na raiz */
    
    printf("Initing %s build: %d revision: %d\n\n", APP_NAME, BUILD, REVISION);

    FILE *file = open_file_for_writing(filename);

    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    /* Insere caracteres no arquivo criado */
    input_characters(file);
    fclose(file);

    /* Reabre o arquivo em formato leitura */
    file = reopen_file_for_reading(filename);

    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    /* Imprime os caracters do arquivo em uma unica linha */
    print_file_contents(file);
    fclose(file);

    return 0;
}
