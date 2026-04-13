#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("test.txt", "a");

    if (fp == NULL) {
    printf("File cannot be opened!");
    } else {

    printf("Enter text to append:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Content appended successfully!");
    fclose(fp);
    }

    return 0;
}
