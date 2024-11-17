#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaxLength 500 

void printlineswithWords(char *fileName, char *word) {

    FILE *file = fopen(fileName, "r");
    char line[MaxLength];
    printf("Lines containing the word (%s):\n", word);
    while (fgets(line,MaxLength, file) != NULL) {
        if (strstr(line, word) != NULL) {
            printf("%s\n", line);
        }
    }


    fclose(file);
}

int main() {
    
    char* file="source.txt";
    char* word="jonsnow";
    printlineswithWords(file, word);

    return 0;
}
