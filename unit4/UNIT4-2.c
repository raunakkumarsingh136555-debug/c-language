#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
    printf("File not found!");
    return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
    characters++;

    if (ch == ' ')
    spaces++;
    else if (ch == '\t')
    tabs++;
    else if (ch == '\n')
    lines++;
    }

    fclose(fp);

    printf("\nCharacters = %d", characters);
    printf("\nSpaces = %d", spaces);
    printf("\nTabs = %d", tabs);
    printf("\nLines = %d", lines + 1);

    return 0;
}
